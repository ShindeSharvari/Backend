using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Delegates
{
    public class Demo
    {
        public delegate int Calculate(int x, int y);
        public delegate void D1(string name);
        public static void SayHello(string name)
        {
            Console.WriteLine("Hello " + name);
        }
        public static void SayByy(string name)
        {
            Console.WriteLine("Byy " + name);
        }
        public static int Add(int x, int y) => x + y;
        public static int Sub(int x, int y) => x - y;

        public static int Mul(int x, int y) => x * y;
        public static void Main1()
        {
            /*// int a=10, b=9;
             Calculate a = Add;
             Calculate b = Sub;
             Calculate c = (x, y) => (x > 0 && y > 0) ? x / y : 0;
             //++++++++++++++++++++++++++++++
             Console.WriteLine(a(1,2));
             Console.WriteLine(b(1,2));
             Console.WriteLine(c(1,2));
             a += c;

             Console.WriteLine(a);*/

            D1 d = SayHello;
            d("Sakshi");
            D1 d2 = SayByy;
            d2 += d;
            d2("Sharvari");


        }
    }
}
