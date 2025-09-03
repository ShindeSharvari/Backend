using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.String
{
    //Count the number of strings in an array that have length greater than 5.
    public class CountElementGreaterThan5
    {
        public static void Task()
        {
            string[] names = new string[] { "Sharvari", "Shiv", "Ridhi", "Vaishali", "Sunil", "Manish" };
            int result = names.Where(x => x.Length > 5).Count();
            Console.WriteLine("Number of strings in an array that have length greater than 5 = " + result);

            int res = names.Count(x=> x.Length>5);
            Console.WriteLine("Number of strings in an array that have length greater than 5 = " + res);
        }
    }
}
