using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.String
{
    // Write a program to reverse the order of elements in a string array.
    public class ReverseArray
    {
        // LINQ Reverse() + ToArray() → Creates a NEW array, does not change the original in place
        public static void ReverseArr(ref string[] array)
        {
            array = array.Reverse().ToArray(); // reassigns with a new reversed array
        }

        public static void Task()
        {
            string[] animals = new string[5] { "Cat", "Dog", "Buffalo", "Sheep", "Monkey" };

            // Using LINQ Reverse → New array created, original replaced by ref
            ReverseArr(ref animals);
            foreach (var item in animals)
            {
                Console.WriteLine(item);
            }

            // Using loop → Just prints in reverse, does NOT change original array
            Console.WriteLine("--------Using Loop---------");
            for (int i = animals.Length - 1; i >= 0; i--)
            {
                Console.WriteLine(animals[i]);
            }

            // Using System.Array.Reverse → Changes the original array in-place
            Console.WriteLine("--------Using Array.Reverse--------");
            System.Array.Reverse(animals);
            foreach (var item in animals)
            {
                Console.WriteLine(item);
            }
        }
    }
}
