using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.String
{
    //Create a string array of subjects and find if "Maths" exists in the array.
    public class CheckExistsOrNot
    {
        public static void Task()
        {
            string[] subjects = new string[] { "Science", "Maths", "English", "Geography", "Biology" };
            //Console.WriteLine(subjects.Contains("Maths"));

            bool result = subjects.Contains("Maths");
            Console.WriteLine(result ? "Maths exists in array" : "Maths doesn't exist in array");    

        }
    }
}
