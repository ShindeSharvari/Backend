using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public class CountElements
    {
        // Count: Count how many numbers are greater than num in the array.
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

        public static int CountGreaterThan(int[] arr, int num)
        {
            int result=  arr.Count(x => x > num);
            return result;
        }
        public static void Run()
        {
            int size,num;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];

            GetUserInput(size, arr);
            DisplayArray("Original Array : ", arr);

            Console.WriteLine("Enter the number to count greater than");
            num = int.Parse(Console.ReadLine());


            int result = CountGreaterThan(arr, num);
            if (result > 0)
            {
                Console.WriteLine($"Total numbers greater than {num} = {result}");
            }
            else
            {
                Console.WriteLine($"No element present greater than {num}");
            }
        }
    }
}
