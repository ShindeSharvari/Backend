using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.LINQ
{
    //Find the third smallest number in an integer array.
    public class FindThirdSmallestElement
    {
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
        public static void GetThirdSmallestElement(int[] arr)
        {
            int res = arr.OrderBy(x => x).Distinct().Skip(2).First();
            Console.WriteLine($"Third smallest element = {res}");
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];

            UserInput(size, arr);
            DisplayArray(arr);

            GetThirdSmallestElement(arr);

        }
    }
}
