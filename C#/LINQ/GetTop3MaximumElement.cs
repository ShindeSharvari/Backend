using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.LINQ
{
    public class GetTop3MaximumElement
    {
        //Get the top 3 maximum numbers from an array.
        public static void UserInput(int size, int[] arr)
        {
            for (int i = 0; i < size; i++)
            {
                Console.WriteLine($"Enter the element {i + 1}");
                arr[i] = int.Parse(Console.ReadLine());
            }
        }
        public static void DisplayArray(int[] arr)
        {
            Console.WriteLine("Array: [" + string.Join(", ", arr) + "]");
        }
        public static void GetTop3MaximumElementFromArray(int[] arr)
        {
            int[] res = arr.OrderByDescending(x => x).Distinct().Take(3).ToArray();
            Console.Write("Top 3 maximum number from array =");
            DisplayArray(res);
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];

            UserInput(size, arr);
            DisplayArray(arr);

           GetTop3MaximumElementFromArray(arr);

        }
    }
}
