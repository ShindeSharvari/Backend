using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS
{
    public class Test
    {
        public int x = 0;
        public static int cnt= 0;

        public Test() { x++; cnt++; }

        public Test(int x)
        {
            this.x = x;
            cnt++;
        }
    }
    public class TestApp
    {
        public static void Task()
        {
            Test t1 = new Test();
            Console.WriteLine($"Count = {Test.cnt}");
            Test t2 = new Test(11);
            Console.WriteLine($"Count = {Test.cnt}");

            Console.WriteLine($"t1 X = {t1.x}");
            Console.WriteLine($"t2 X = {t2.x}");
        }
    }
}
