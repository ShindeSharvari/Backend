using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    // Sort Descending: Sort an array of integers from largest to smallest.
    class SortArrayInDescending
    {
        public static void GetUserInput(int size, int[] arr)
        {
            for (int i = 0; i < size; i++)
            {
                Console.WriteLine($"Enter {i + 1} element ");
                //arr[i] = int.Parse(Console.ReadLine());
                Console.WriteLine("[" + string.Join(", ", arr) + "]");
            }
        }

        public static void DisplayArray(string message, int[] arr)
        {
            Console.WriteLine(message);
            Console.WriteLine("[" + string.Join(", ", arr) + "]");
        }

        public static int[] SortArrayInDescendingOrder(int[] arr)
        {
            return arr.OrderByDescending(x => x).ToArray();
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];


            GetUserInput(size, arr);
            DisplayArray("Original Array : ", arr);

            int[] SortedArray = SortArrayInDescendingOrder(arr);

            DisplayArray("Descending sorted Array ", SortedArray);
        }
    }
}
