using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public class SingleOrDefaultEquals
    {
        //SingleOrDefault: Get the only element equal to 150 (return 0 if none).

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

        public static int GetEqualNumber(int[] arr,int num)
        {
            try
            {
                return arr.SingleOrDefault(x => x == num);
            }
            catch (Exception ex)
            {
                return -1;
            }
            
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());

            int[] arr = new int[size];
            GetUserInput(size, arr);

            DisplayArray("Original Array = ", arr);

            Console.WriteLine("Enter number to find equal to that");
            int num = int.Parse(Console.ReadLine());

            int result = GetEqualNumber(arr, num);
            if(result == 0)
            {
                Console.WriteLine("No match found");
            }
            else if(result == -1)
            {
                Console.WriteLine("More than one equal elements in array");
            }
            else
            {
                Console.WriteLine($"Element equal to {num} = {result}");
            }
        }
    }
}
