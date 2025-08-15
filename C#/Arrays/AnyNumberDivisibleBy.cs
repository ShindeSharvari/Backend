using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public class AnyNumberDivisibleBy
    {
        // Any: Check if there’s any number in the array that is divisible by 7.
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

        public static bool CheckAnyNumberDivisible(int[] arr,int num)
        {
           return arr.Any(x => x%num==0);
        }
        public static void Run()
        {
            int size,num;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];


            GetUserInput(size, arr);
            DisplayArray("Original Array : ", arr);

            Console.WriteLine("Enter the number to check any number divisible by it or not");
            num = int.Parse(Console.ReadLine());

            bool result = CheckAnyNumberDivisible(arr,num);
            Console.WriteLine($"Is there any number present in array that divisible by {num} = {result}");

            
        }
    }
}
