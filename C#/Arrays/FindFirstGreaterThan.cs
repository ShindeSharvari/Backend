using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public class FindFirstGreaterThan
    {
        //First Match: Find the first number greater than 25 in an array.
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

        public static int GetFirstGreater(int[] arr,int num)
        {
            return arr.First(x => x > num);
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

            Console.WriteLine($"First greater number than {num} = "+ GetFirstGreater(arr,num));
        }
    }
}
