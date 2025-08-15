using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public class CheckAllPostiveOrNot
    {
        // All: Check if all numbers in the array are positive.
        public static void GetUserInput(int size, int[] arr)
        {
            for (int i = 0; i < size; i++)
            {
                Console.WriteLine($"Enter {i + 1} element ");
                arr[i] = int.Parse(Console.ReadLine());
            }
        }

        public static void DisplayArray(string message, int[] arr)
        {
            Console.WriteLine(message);
            Console.WriteLine("[" + string.Join(", ", arr) + "]");
        }

        public static bool CheckAllPositiveOrNot(int[] arr)
        {
            return arr.All(x => x>0);
        }
        public static void Run()
        {
            int size, num;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];


            GetUserInput(size, arr);
            DisplayArray("Original Array : ", arr);

            bool result = CheckAllPositiveOrNot(arr);
            if(result)
            {
                Console.WriteLine("All numbers are positive in array");
            }
            else
            {
                Console.WriteLine("All numbers are not positive in array");
            }
        }
    }
}
