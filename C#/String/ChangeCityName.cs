using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.String
{
    //Create a string array of 3 cities. Change the second city name and print all cities.
    public class ChangeCityName
    {
        public static void DisplayCities(string[] city)
        {
            foreach (var item in city)
            {
                Console.WriteLine(item);
            }
        }
        public static void Task()
        {
            string[] city = new string[] { "Karad", "Pune", "Mumbai" };
            //city[1] = city[1].Replace("Pune", "Nagpur");

            city[1] = "Satara";
            DisplayCities(city);
        }
    }
}
