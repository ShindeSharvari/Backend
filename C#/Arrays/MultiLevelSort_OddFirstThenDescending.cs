using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Array
{
    public  class MultiLevelSort_OddFirstThenDescending
    {
        public static void GetUserInput(int size, int[] arr)
        {
            for(int i=0;i<size;i++)
            {
                Console.WriteLine($"Enter {i + 1} place element");
                arr[i] = int.Parse(Console.ReadLine());
            }
        } 

        public static void Display(string message ,int[] arr)
        {
            Console.WriteLine(message);
            //foreach(int i in arr) Console.WriteLine(i);
            Console.WriteLine("[" + string.Join(", ", arr) + "]");
        }

        public static int[] MultiLevelSort_Descending(int[] arr)
        {
            return arr.OrderBy(x => x % 2 == 0) 
                      .ThenByDescending(x => x) // sort both groups in descending order
                      .ToArray();
        }
        public static void Run()
        {
            int size;
            Console.WriteLine("Enter the array size");
            size = int.Parse(Console.ReadLine());
            int[] arr = new int[size];

            GetUserInput(size, arr);
            Display("Original String",arr);

            int[] sorted = MultiLevelSort_Descending(arr);
            Display("Sorted array odd first then descending", sorted);
        }
    }
}
