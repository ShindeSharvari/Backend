using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Delegates
{
    public delegate int AddDelegate(int x, int y);
    public delegate int SubDelegate(int x, int y);
    public delegate int MultDelegate(int x, int y);
    public delegate double DivDelegate(int x, int y);

    public class SimpleCalculator
    {
        public static int Sum(int num1,int num2) => num1 + num2;
        public static int Sub(int num1, int num2) => num1 - num2;
        public static int Mult(int num1, int num2) => num1 * num2;
        public static double Divide(int num1, int num2) => num1/num2;

    }
    public class Calci
    {
        public static void Task()
        {
            AddDelegate add = SimpleCalculator.Sum;
            Console.WriteLine($"Addition = {add(10, 5)}");

            SubDelegate sub = SimpleCalculator.Sub;
            Console.WriteLine($"Subtraction = {sub(10, 5)}");

            MultDelegate mult = SimpleCalculator.Mult;
            Console.WriteLine($"Multiplication = {mult(10, 5)}");

            DivDelegate div = SimpleCalculator.Divide;
            Console.WriteLine($"Division = {div(10, 5)}");
        }
    }
}
