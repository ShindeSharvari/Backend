using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{ 
    public class FindSingleElementEqualsToNumber
    {

        // Single Element: From an array, get the only element equal to 99 (throw error if more than one).
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

        public static void GetEqualElement(int[] arr, int num)
        {
            int count=arr.Count(x =>  x == num);
            if(count==1)
            {
                int result = arr.Single(x => x == num);
                Console.WriteLine($"The element euals to {num} = {result}");
            }
            else if(count == 0)
            {
                Console.WriteLine($"No element found in array equals to = {num}");
            }
            else
            {
                Console.WriteLine($"There are more than one equals to element {num}");
            }
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
            Console.WriteLine("Enter the number to find equal in array");
            num = int.Parse(Console.ReadLine());

            GetEqualElement(arr, num);
        }
    }
}
