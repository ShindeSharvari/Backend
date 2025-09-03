using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.String
{
    //Store 5 country names in an array and sort them in alphabetical order.
    public class SortCountryNames
    {
        public static void Task()
        {
            string[] countryNames = new string[] { "India", "Japan", "Canada", "France", "Australia" };

            //Storing it in same array becoz it doesn't replace in original directly
            //countryNames = countryNames.OrderBy(x => x).ToArray();
            //foreach (var item in countryNames)
            //{
            //    Console.WriteLine(item);
            //}

            // Sorts the array in place (changes the original directly)
            System.Array.Sort(countryNames);
            foreach (var item in countryNames)
            {
                Console.WriteLine(item);
            }
        }
    }
}
