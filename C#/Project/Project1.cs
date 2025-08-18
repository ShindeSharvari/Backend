using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Project
{
    public class Project1
    {
            public static void SquarePattern(int n)
            {
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= n; j++)
                    {
                        Console.Write("* ");
                    }
                    Console.WriteLine();
                }
            }


            public static void HollowSquarePattern(int n)
            {
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= n; j++)
                    {
                        if (i == 1 || i == n || j == 1 || j == n)
                        {
                            Console.Write("* ");
                        }
                        else
                        {
                            Console.Write("  ");
                        }
                    }
                    Console.WriteLine();
                }
            }

            public static void RightTraingle(int n)
            {
                for (int i = 1; i < n; i++)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        Console.Write("* ");
                    }
                    Console.WriteLine();
                }
            }

            public static void HallowRightTraingle(int n)
            {
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        if (j == 1 || i == n || i == j)
                        {
                            Console.Write("* ");
                        }
                        else
                        {
                            Console.Write("  ");
                        }
                    }
                    Console.WriteLine();
                }
            }

            public static void Pattern01(int r, int c)
            {
                int k = 1;
                for (int i = 1; i <= r; i++)
                {
                    for (int j = 1; j <= c; j++)
                    {
                        Console.Write($"{k} ");
                        k = (k == 1) ? 0 : 1;
                    }
                    Console.WriteLine();
                }
            }

             public static void Pattern12(int r, int c)
            {
                int k = 1;
                for (int i = 1; i <= r; i++)
                {
                    for (int j = 1; j <= c; j++)
                    {
                        Console.Write($"{k}\t");
                        k++;
                    }
                    Console.WriteLine();
                }
            }

            public static void PrintFiboSeries(int n)
            {
                int n1 = 0, n2 = 1;
                for (int i = 1; i <= n; i++)
                {
                    int n3 = n1 + n2;
                    Console.WriteLine($"{n1} ");
                    n1 = n2;
                    n2 = n3;
                }
            }


            public static void CheckPerfect(int n)
            {
                int sum = 0;
                for (int i = 1; i < n; i++)
                {
                    if (n % i == 0)
                    {
                        sum += i;
                    }
                }
                Console.WriteLine($"{n} {(n == sum ? "is a perfect number" : "is not a perfect number")}");
            }



            public static int GetFactorial(int n)
            {
                int fact = 1;
                for (int i = n; i >= 1; i--)
                {
                    fact *= i;
                }
                return fact;
            }

            public static void CheckStrong(int n)
            {
                int sum = 0;
                for (int i = n; i > 0; i = i / 10)
                {
                    int rem = i % 10;
                    sum += GetFactorial(rem);
                }
                string res=(n == sum) ? " is a strong number" : "is not a  strong number";
                Console.WriteLine($"{n} {res}");
            }


           public static int GetPower(int baseNum , int raise)
           {
                int pow = 1;
                for (int i = 1; i <= raise; i++)
                {
                    pow = pow * baseNum;
                }
                return pow;
            }
            public static void BinaryToDecimal(int n)
            {
                int decimalNum= 0, num = 0, rem = 0;
                for (int i = 0; n > 0; i++)
                {
                    rem = n % 10;
                    num = rem * (GetPower(2, i));
                    decimalNum+= num;
                    n = n / 10;
                }
                Console.WriteLine($"{n} to decimal = {decimalNum} ");
            }
            public static void UserChoice(int option)
            {
                int n, r, c;
                switch (option)
                {
                    case 1:
                        Console.WriteLine("Enter the row number of square to print pattern.");
                        n=int.Parse(Console.ReadLine());
                        SquarePattern(n);
                        break;
                    case 2:
                        Console.WriteLine("Enter the row number of square to print hollow pattern.");
                        n = int.Parse(Console.ReadLine());
                        HollowSquarePattern(n);
                        break;

                    case 3:
                        Console.WriteLine("Enter the height of triangle to print right triangle  pattern.");
                        n = int.Parse(Console.ReadLine());
                        RightTraingle(n);
                        break;

                    case 4:
                        Console.WriteLine("Enter the height of triangle to print hollow right triangle pattern.");
                        n = int.Parse(Console.ReadLine());
                        HallowRightTraingle(n);
                        break;
                    case 5:
                        Console.WriteLine("Enter the row - and column | number to print pattern in 1 0 .....");
                        r = int.Parse(Console.ReadLine());
                        c = int.Parse(Console.ReadLine());
                        Pattern01(r, c);
                        break;

                    case 6:
                        Console.WriteLine("Enter the row - and column | number to print pattern in 1 2 .....");
                        r = int.Parse(Console.ReadLine());
                        c = int.Parse(Console.ReadLine());
                        Pattern12(r, c);
                        break;

                    case 7:
                        Console.WriteLine("Enter the number to check perfect number or not.  ");
                        n = int.Parse(Console.ReadLine());
                        CheckPerfect(n);
                        break;

                    case 8:
                        Console.WriteLine("Enter the number to check strong number or not.  ");
                        n = int.Parse(Console.ReadLine());
                        CheckStrong(n);
                        break;

                    case 9:
                        Console.WriteLine("Enter the number up to you want fibonacci series.  ");
                        n = int.Parse(Console.ReadLine());
                        PrintFiboSeries(n);
                        break;

                    case 10:
                        Console.WriteLine("Enter the binary number to get decimal number.");
                        n = int.Parse(Console.ReadLine());
                        BinaryToDecimal(n);
                        break;

                    default:
                        Console.WriteLine("Choose a valid option");
                        break;

                }
            }


            public static void Run()
            {
                int i = 0;
                do
                {
                    Console.WriteLine("-------------------------------------------------------------------------");
                    Console.WriteLine("1.Sqaure Pattern");
                    Console.WriteLine("2.Hollow Square Pattern");
                    Console.WriteLine("3.Right Triangle");
                    Console.WriteLine("4.Hollow Right Triangle");
                    Console.WriteLine("5.Number Pattern 1 0 ...");
                    Console.WriteLine("6.Number Pattern 1 2 ...");
                    Console.WriteLine("7.Check whether a number is Perfect number or not.");
                    Console.WriteLine("8.Check whether a number is Strong number or not.");
                    Console.WriteLine("9.Print Fibonacci series up to n terms");
                    Console.WriteLine("10.Convert Binary to Decimal number system");
                    Console.WriteLine("Select an option");
                    i=int.Parse(Console.ReadLine());
                    UserChoice(i);
                    Console.WriteLine("To continue press 1 \nFor exit press 0");
                    i = int.Parse(Console.ReadLine());

                }
                while (i == 1);
            }

        }
    }
