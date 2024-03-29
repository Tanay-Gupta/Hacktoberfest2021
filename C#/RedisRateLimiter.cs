using StackExchange.Redis;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;

namespace Server
{
    public class RedisRatelimiter
    {
        private static ConnectionMultiplexer conn;
        private static IDatabase db;
        public static bool Available => db != null;

        static RedisRatelimiter(){
            try
            {
                ConfigurationOptions options = new ConfigurationOptions();
                options.ConnectTimeout = 1000;
                options.EndPoints.Add(Environment.GetEnvironmentVariable("REDIS")??"localhost");
                conn = ConnectionMultiplexer.Connect(options);
                db = conn.GetDatabase();
                Console.WriteLine("Connection to Redis established");
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                Console.WriteLine("Connection to Redis not available");
                //not available
            }
        }

        public static async Task<bool> RateLimit(string key, int secOffset, int maxAllowed)
        {
            key += ":"+(DateTime.Now.Ticks / 10000000)/secOffset;

            var transaction = db.CreateTransaction();
            
            var result = transaction.StringIncrementAsync(key);
            transaction.KeyExpireAsync(key, DateTime.Now.AddSeconds(secOffset));
            transaction.Execute();

            if ((await result) < maxAllowed)
                return false;
            return true;
        }
        
        public static async void Main()
        {
            if (Available)
            {
                for (int i = 0; i < 40; i++)
                {
                    if(await RateLimit("login", 10, 10))
                    {
                        Console.WriteLine("Ratelimited");
                    }else
                    {
                        Console.WriteLine("Not Ratelimited");
                    }
                    
                };
            }
        }

    }
}
