using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.LINQ
{
    public class FindNthSmallestElement
    {
        //Find the nth smallest number in an array.
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
        public static void GetNthSmallestElement(int[] arr, int n)
        {
            int res = arr.OrderBy(x => x).Distinct().Skip(n - 1).First();
            Console.WriteLine($"{n}th smallest element = {res}");
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];

            UserInput(size, arr);
            DisplayArray(arr);

            int num;
            Console.WriteLine("Enter n (to find nth smallest element): ");
            num = int.Parse(Console.ReadLine());

            GetNthSmallestElement(arr, num);

        }
    }
}
