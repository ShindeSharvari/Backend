using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public class ContainsOrNot
    {
        //Contains: Check if the array contains the value 
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

        public static bool CheckContainsOrNot(int[] arr,int num)
        {
            return arr.All(x => x == num);
        }
        public static void Run()
        {
            int size, num;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];

            GetUserInput(size, arr);
            DisplayArray("Original Array : ", arr);

            Console.WriteLine("Enter the number to check it present or not in array");
            num = int.Parse(Console.ReadLine());
            

            bool result = CheckContainsOrNot(arr,num);
            if (result)
            {
                Console.WriteLine($"Array contains {num}");
            }
            else
            {
                Console.WriteLine($"Array contains {num}");
            }
        }
    }
}
