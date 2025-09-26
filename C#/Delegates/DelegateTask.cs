using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Delegates
{
    public delegate int SumDelegate(int x, int y);
    public delegate int SquareDelegate(int x);
    public delegate void PrintMsgDelegate(string msg);
    public delegate int GetMaxDelegate(int x, int y);
    public delegate void EvenOdd(int x);

    public class DelegateTask 
    {
        public static int Sum(int num1, int num2) => num1 + num2;
        public static int Square(int num) => num * num;
        public static void PrintMessage(string message) => Console.WriteLine($"Hello, {message}");
        public static int MaxNumber(int a, int b) => (a > b) ? a : b;

        public static void CheckEvenOdd(int num) =>
            Console.WriteLine(num % 2 == 0 ? $"{num} is an even number" : $"{num} is an odd number");

        public static void Task()
        {
            SumDelegate sumDelegate = Sum;
            Console.WriteLine($"Addition = {sumDelegate(20, 30)}");

            SquareDelegate squareDelegate = Square;
            Console.WriteLine($"Square = {squareDelegate(7)}");

            PrintMsgDelegate printMsgDelegate = PrintMessage;
            printMsgDelegate("Sharvari");

            GetMaxDelegate maxDelegate = MaxNumber;
            Console.WriteLine($"Maximum number = {maxDelegate(4, 7)}");

            EvenOdd evenOddDelegate = CheckEvenOdd;
            evenOddDelegate(27);
        }
    }
}
