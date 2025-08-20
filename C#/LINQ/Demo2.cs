using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

namespace Basic.LINQ
{
    public class Demo2
    {
        public static void Task()
        {

            /*---------------------------------------------------------------
            int[] nums = { 111, 222, 33, 44, 55, 66 };
            // 1. Filter numbers greater than 50
            //int[] arr = nums.Where(x => x > 50).Select(x => x).ToArray();
            int[] arr = nums.Where(x => x > 50).ToArray();

            // Convert to List and print each
            arr.ToList().ForEach(x => Console.WriteLine(x));

            // 2. Find a specific element (only one match allowed)
            var res = nums.Where(x => x == 222).Single();
            Console.WriteLine(res);
            ---------------------------------------------------------------*/

            /*---------------------------UNION-----------------------------
            int[] arr = { 1, 2, 3, 4, 5, 6, 7, 9 };
            int[] arr1 = { 4, 5, 6, 7, 10, 11, 12, 14, 1, 2, 3 };
            var res = arr.Union(arr1).ToArray();
            foreach (var u in res)
            {
                Console.WriteLine(u);
            }

            // Print like an array: [1, 2, 3, ...]
            Console.WriteLine($"[{string.Join(", ", res)}]");

           ----------------------------------------------------------------*/

            /*--------------------------CONCAT------------------------------
            int[] arr = { 1, 2, 3, 4, 5, 6, 7, 9, 0, 77, 97 };
            int[] arr1 = { 4, 5, 6, 7, 10, 11, 12, 14, 1, 2, 3 };
            var res = arr.Concat(arr1).ToArray();
            foreach (var u in res)
            {
                Console.WriteLine(u);
            }
            // Print like an array: [1, 2, 3, ...]
            Console.WriteLine($"[{string.Join(", ", res)}]");
            --------------------------------------------------------------*/

            /*-------------------------INTERSECT---------------------------
            int[] arr = { 1, 2, 3, 4, 5, 6, 7, 9, 0, 77, 97 };
            int[] arr1 = { 4, 5, 6, 7, 10, 11, 12, 14, 1, 2, 3 };
            var res = arr.Intersect(arr1).ToArray();
            foreach (var u in res)
            {
                Console.WriteLine(u);
            }

            -------------------------------------------------------------*/

            /*--------------------------ANY----------------------------

            int[] arr = { 1, 2, 3, 4, 5, 6, 7, 9, 0, 77, 97 };
            bool res =arr.Any(x => x > 5);  // checks any value greater than 5
            Console.WriteLine(res);

            -----------------------------------------------------------------*/

            /*----------------------For second max 1.method-------------------------
            int[] arr = { 1, 2, 3, 4, 5, 6, 7, 9, 0, 77, 97 };
            int ele = arr.Where(x=> x < arr.Max()).Max();
               //Largest = 9
               //Elements less than 9 = {1, 2, 3, 5, 7}
               //Max of these = 7  
            Console.WriteLine(ele); 
            -------------------------------------------------------------------*/
            /*----------------------For second max 2.method-------------------------

           int[] arr = { 1, 2, 3, 4, 5, 6, 7, 9, 0, 77, 97 };
           var res = arr.GroupBy(x => x);
           Console.WriteLine(res); 
           //find second largest ELelement
           Console.WriteLine(arr.Distinct().OrderByDescending(x => x).Skip(1).First());

           -------------------------------------------------------------------------*/

            /*-------------------------Count Of Each Element-------------------------
            int[] a = { 2, 3, 4, 2, 4, 1, 2, 1, 1, 4, 3, 2, 4, 2, 1, 2 };
            var maxcount = a.GroupBy(x => x);
            foreach (var item in maxcount)
            {
                Console.WriteLine($"No :{item.Key} , Count :{item.Count()}");
            }
            //find max time reapeate no 
            var res = maxcount.OrderByDescending(x => x.Count()).First();
            Console.WriteLine($"Max Repeated No :{res.Key} , Count :{res.Count()}");
            ------------------------------------------------------------------------*/

            //Find second last max element 
            int[] a = { 2, 3, 4, 2, 4, 1, 2, 1, 1, 4, 3, 2, 4, 2, 1, 2, 44, 55, 6, 9 };
            var sm = a.Distinct().OrderByDescending(x => x).Skip(3).First();
            Console.WriteLine($"Fourt largest element => {sm}");

        }
    }
}
