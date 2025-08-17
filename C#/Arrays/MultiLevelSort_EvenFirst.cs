using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public class MultiLevelSort_EvenFirst
    {
        // Multi-level Sort: Sort an array by even numbers first, then by value ascending.

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

        public static int[] SortArrayInEvenAscendingOrder(int[] arr)
        {
            return arr.OrderBy(x => x%2).ThenBy(x => x).ToArray();
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];


            GetUserInput(size, arr);
            DisplayArray("Original Array : ", arr);

            int[] SortedArray = SortArrayInEvenAscendingOrder(arr);

            DisplayArray("Sorted Array ", SortedArray);
        }

    }
}
