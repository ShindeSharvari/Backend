using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Delegates
{
    public delegate void GreetingDelegate(string name);
    public class Greetings
    {
        public static void GoodMorning(string name)
        {
            Console.WriteLine($"Good Morning, {name}!");
        }

        public static void GoodAfternoon(string name)
        {
            Console.WriteLine($"Good Afternoon, {name}!");
        }

        public static void GoodEvening(string name)
        {
            Console.WriteLine($"Good Evening, {name}!");
        }
    }

    public class Greet
    {
        public static void Task()
        {
            GreetingDelegate greetMorning = Greetings.GoodMorning;
            GreetingDelegate greetAfternoon = Greetings.GoodAfternoon;
            GreetingDelegate greetEvening = Greetings.GoodEvening;

            greetMorning("Sharvari");
            greetAfternoon("Sharvari");
            greetEvening("Sharvari");

            Console.ReadLine();
        }
    }
}
