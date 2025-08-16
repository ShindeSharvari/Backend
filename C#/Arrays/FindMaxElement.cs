using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public class FindMaxElement
    {
        //Max: Find the largest number in the array.
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

        public static int GetMaxOfElements(int[] arr)
        {
            return arr.Max(x => x);
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];

            GetUserInput(size, arr);
            DisplayArray("Original Array : ", arr);


            Console.WriteLine("Max element from array = " + GetMaxOfElements(arr));
        }
    }
}
