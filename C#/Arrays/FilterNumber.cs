using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public class FilterNumber
    {
        // Filter: From an integer array, get all numbers greater than 50.

        // Get array input from user
        public static void GetInputFromUser(int size, int[] arr)
        {
            for (int i = 0; i < size; i++)
            {
                Console.WriteLine($"Enter {i + 1} element");
                arr[i] = int.Parse(Console.ReadLine());
            }
        }

        // Return numbers greater than 50 as an array
        public static int[] GetFilteredNumbers(int[] arr)
        {
            return arr.Where(x => x > 50).ToArray();
        }

        // Display array with a message
        public static void DisplayArray(string message, int[] arr)
        {
            Console.WriteLine($"\n{message}");
            if (arr.Length == 0)
            {
                Console.WriteLine("No elements found.");
            }
            else
            {
                Console.WriteLine("[" + string.Join(", ", arr) + "]");
            }
        }


        public static void Run()
        {
            Console.WriteLine("Enter the size of array");
            int size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];

            // Get original array
            GetInputFromUser(size, arr);

            // Filtered array
            int[] filtered = GetFilteredNumbers(arr);

            // Display both arrays
            // here we are also sending message while printing message in string
            DisplayArray("Original array:", arr);
            DisplayArray("Filtered array (greater than 50):", filtered);
        }

    }
}
