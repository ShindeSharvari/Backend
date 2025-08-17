using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public class TransformElements
    {
        // Transform: Multiply each element in an array by 5 and return the result.


        // Getting inputs from user
        public static void GetUserInput(int size,int[] arr)
        {
            for (int i = 0; i < size; i++)
            {
                Console.WriteLine($"Enter {i + 1} element ");
                arr[i]=int.Parse(Console.ReadLine());
            }
        }

        public static void DisplayArray(string message,int[] arr)
        {
            Console.WriteLine(message);
            Console.WriteLine("[" + string.Join(", ", arr) + "]");
        }

        public static int[] GetTransFormArray(int[] arr)
        {
            return arr.Select(x => x * 5).ToArray();
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int []arr = new int[size];

            
            GetUserInput(size,arr);
            DisplayArray("Original Array : ", arr);

            int[] TransformedArray = GetTransFormArray(arr);

            DisplayArray("Transformed Array by multiplying elements by 5", TransformedArray);



        }
    }
}
