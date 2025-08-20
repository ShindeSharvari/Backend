using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.LINQ
{
    //Find the sum of even numbers greater than 10.

    public class SumOfEvenNumber
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
        public static void SumOfEvenNumbersGreaterThanTen(int[] arr)
        {
            int sum = arr.Where(x=>x>10 && x%2 == 0).Sum();
            Console.WriteLine($"Sum of even numbers greater than 10 = {sum}");
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];

            UserInput(size, arr);
            DisplayArray(arr);

            SumOfEvenNumbersGreaterThanTen(arr);

        }

    }
}
