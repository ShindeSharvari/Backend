using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    //LastOrDefault: Find the last number greater than 200 (return 0 if none).
    public class LastOrDefaultGreaterThan
    {
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

        public static int GetLastGreater(int[] arr, int num)
        {
            int result = arr.LastOrDefault(x => x > num);
            return result == 0 ? 0 : result;
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];


            GetUserInput(size, arr);
            DisplayArray("Original Array : ", arr);

            int num;
            Console.WriteLine("Enter the number to find last number greater than that");
            num = int.Parse(Console.ReadLine());

            int result = GetLastGreater(arr, num);
            if (result == 0)
            {
                Console.WriteLine($"No element found in array greater than {num}");
            }
            else
            {
                Console.WriteLine($"Last number greater than {num} = {result}");
            }
        }

    }
}
