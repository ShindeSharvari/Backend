using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    //Last Match: Find the last number less than 20 in an array.
    public class FindLastMatch
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

        public static int GetLastLessNumber(int[] arr, int num)
        {
            return arr.Last(x => x < num);
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
            Console.WriteLine("Enter the number to find last number less than");
            num = int.Parse(Console.ReadLine());

            Console.WriteLine($"Last number less than {num} = " + GetLastLessNumber(arr, num));
        }
    }
}
