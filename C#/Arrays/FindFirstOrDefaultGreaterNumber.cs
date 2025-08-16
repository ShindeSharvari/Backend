using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    //FirstOrDefault: Find the first number greater than 100 in an array (return 0 if none).
    public class FindFirstOrDefaultGreaterNumber
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

        public static int GetFirstGreater(int[] arr, int num)
        {
            int result = arr.FirstOrDefault(x => x>num);
            return result==0 ? 0 : result;
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
            Console.WriteLine("Enter the number to find first greater number than that");
            num = int.Parse(Console.ReadLine());

            int result = GetFirstGreater(arr, num);
            if (result == 0)
            {
                Console.WriteLine($"No element found in array greater than {num}");
            }
            else
            {
                Console.WriteLine($"First greater number than {num} = " + GetFirstGreater(arr, num));
            }
            
        }
    }
}
