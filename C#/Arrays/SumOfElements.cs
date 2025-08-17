using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public class SumOfElements
    {
        //Sum: Find the total sum of all numbers in the array.
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

        public static int GetSumOfElements(int[] arr)
        {
            int result = arr.Sum(x => x);
            return result;
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];

            GetUserInput(size, arr);
            DisplayArray("Original Array : ", arr);


            Console.WriteLine("Sum of array elements = "+ GetSumOfElements(arr));
        }
    }
}
