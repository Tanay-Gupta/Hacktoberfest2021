using Newtonsoft.Json;
using System;

namespace Json
{
    class Program
    {
        public class Structure
        {
            public int Integer;
            public string Name;
            public bool Active;

            public override bool Equals(object obj)
            {
                var other = obj as Structure;
                return other.Active == Active && other.Integer == Integer && other.Name == Name;
            }

            public override string ToString()
            {
                return $"{Name}  {Integer} {Active}";
            }
        }

        public static void Main(string[] args)
        {
            var struc = new Structure()
            {
                Integer = -1,
                Name = "JSON",
                Active = true
            };

            var jsonString = JsonConvert.SerializeObject(struc);

            var strucCopy = JsonConvert.DeserializeObject<Structure>(jsonString);

            Console.WriteLine(struc);
            Console.WriteLine(strucCopy);
            Console.WriteLine(struc.Equals(strucCopy));

            Console.ReadLine();

        }
    }
}
