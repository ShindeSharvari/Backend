using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.String
{
    //3. Take a string array of 4 fruits and print the first and last element.

    public class PrintFirstAndLast
    {
        public static void Task()
        {
            string[] fruits;
            fruits = new string[] { "Mango", "Banana", "Kiwi", "Grapes" };
            Console.WriteLine("First fruit in array = "+fruits[0]);
            Console.WriteLine("Last fruit in array = "+fruits[fruits.Length-1]);

            Console.WriteLine(fruits.First());
            Console.WriteLine(fruits.Last());
        }
    }
}
