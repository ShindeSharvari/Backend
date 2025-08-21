using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.LINQ
{
    public class FindDuplicates
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
        public static void FindDuplicatesFromArray(int[] arr)
        {
            //int[] res= arr.Where(x => arr.Count(y => y==x)>1).Distinct().ToArray();
            int[] res= arr.GroupBy(x => x).Where(x => x.Count()>1).Select(x => x.Key).ToArray();
            Console.Write("Duplicate Array = ");
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

            FindDuplicatesFromArray(arr);




        }
    }
}
