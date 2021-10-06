using System;

namespace ReverseNumber
{
    class Program
    {
        public static void Main(string[] args)
        {
            Console.Write("Input a number : ");
            int number = int.Parse(Console.ReadLine());

            while (number != 0)
            {
                Console.Write(number % 10);
                number /= 10;
            }

        }
    }
}