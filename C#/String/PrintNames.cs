using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.String
{
    public class PrintNames
    {
        //Declare a string array of size 5 and store your friends' names. Print all names using a loop.
        public static void DisplayNames(string[] names)
        {
            foreach (var item in names)
            {
                Console.WriteLine(item);
            }
        }
        public static void Task()
        {
            string[] names = new string[5] {"Sharvari","Sakshi","Rakhi","Shivanjali","Sanika"};
            DisplayNames(names);
        }
    }
}
