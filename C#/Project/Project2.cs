using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Project
{
    public class Project2
    {

        public static void DrawRhombus(int n)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= (n - 1) - i + 1; j++)
                {
                    Console.Write("  ");
                }
                for (int k = 1; k <= n; k++)
                {
                    Console.WriteLine("* ");
                }
                Console.WriteLine();
            }
        }

        public static void HollowRhombus(int n)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= (n - 1) - i + 1; j++)
                {
                    Console.Write("  ");
                }
                for (int k = 1; k <= n; k++)
                {
                    if (i == 1 || k == 1 || i == n || k == n)
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


        public static void MirroredRightTriangle(int n)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= (n - 1) - i + 1; j++)
                {
                    Console.Write("  ");
                }
                for (int k = 1; k <= i; k++)
                {
                    Console.Write("* ");
                }
                Console.WriteLine();
            }
        }


        public static void HollowMirroredRightTriangle(int n)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= (n - 1) - i + 1; j++)
                {
                    Console.Write("  ");
                }
                for (int k = 1; k <= i; k++)
                {
                    if (k == i || i == n || k == 1)
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

        public static void Pattern54()
        {
            int k = 5;
            for (int i = 1; i <= 5; i++)
            {
                for (int j = 1; j <= 5 - i + 1; j++)
                {
                    Console.Write($"{k} ");
                }
                k--;
                Console.WriteLine();
            }
        }

        public static void Pattern12()
        {
            int k = 1;
            for (int i = 1; i <= 5; i++)
            {
                for (int j = 1; j <= 5 - i + 1; j++)
                {
                    Console.Write($"{k} ");
                }
                k++;
                Console.WriteLine();
            }
        }


        public static void GetOddSum(int last)
        {
            int sum = 0;
            for (int i = 1; i <= last; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
           Console.WriteLine($"Sum of all odd numbers between 1 to {last} = {sum}");
        }


        public static void PrintTable(int n)
        {
            for (int mult = 1; mult <= 10; mult++)
            {
                Console.WriteLine($" {n} * {mult} = {mult*n}");
            }
        }

        public static void FindFirstLastDigits(int n)
        {
            int ct = 0;
            for (int i = n; i > 0; i = i / 10)
            {
                int rem = i % 10;
                ct++;
            }

            for (int j = 1; j <= ct; j++)
            {
                int rem = n % 10;
                n = n / 10;
                if (j == ct)
                {
                    Console.WriteLine($"first digit = {rem}");
                }
                if (j == 1)
                {
                    Console.WriteLine($"last digit = {rem}");
                }
            }
        }



        public static void CountDigits(int n)
        {
            int ct = 0;
            for (int i = n; i > 0; i = i / 10)
            {
                int rem = i % 10;
                ct++;
            }
            Console.WriteLine($"There are {ct} digits in {n}");
        }


        public static void UserChoice(int option)
        {
            int n, r, c;
            switch (option)
            {
                case 1:
                    Console.WriteLine("Enter the row number of rhombus to print pattern.");
                    n=int.Parse(Console.ReadLine());
                    DrawRhombus(n);
                    break;
                case 2:
                    Console.WriteLine("Enter the row number of rhombus to print hollow pattern.");
                    n = int.Parse(Console.ReadLine());
                    HollowRhombus(n);
                    break;

                case 3:
                    Console.WriteLine("Enter the height of triangle to print mirrored right triangle  pattern.");
                    n = int.Parse(Console.ReadLine());
                    MirroredRightTriangle(n);
                    break;

                case 4:
                    Console.WriteLine("Enter the height of triangle to print hollow mirrored right triangle pattern.");
                    n = int.Parse(Console.ReadLine());
                    HollowMirroredRightTriangle(n);
                    break;

                case 5:
                    Pattern54();
                    break;

                case 6:
                    Pattern12();
                    break;

                case 7:
                    Console.WriteLine("Enter the last digit of range from 1 to get odd sum.");
                    n = int.Parse(Console.ReadLine());
                    GetOddSum(n);
                    break;

                case 8:
                    Console.WriteLine("Enter the number to print table.  ");
                    n = int.Parse(Console.ReadLine());
                    PrintTable(n);
                    break;

                case 9:
                    Console.WriteLine("Enter the number to get first and last digit.  ");
                    n = int.Parse(Console.ReadLine());
                    FindFirstLastDigits(n);
                    break;

                case 10:
                    Console.WriteLine("Enter the number to count digits.");
                    n = int.Parse(Console.ReadLine());
                    CountDigits(n);
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
                Console.WriteLine("1.Rhombus Pattern");
                Console.WriteLine("2.Hollow Rhombus Pattern");
                Console.WriteLine("3.Inverted Right Triangle");
                Console.WriteLine("4.Hollow Inverted Right Triangle");
                Console.WriteLine("5.Reverse Number Pattern  555 444 ...");
                Console.WriteLine("6.Continue Number Pattern 111 222 ...");
                Console.WriteLine("7.To find the sum of all odd numbers between 1 to n.");
                Console.WriteLine("8.To print a multiplication table of any number.");
                Console.WriteLine("9.To find the first and last digit of any number.");
                Console.WriteLine("10.To count the number of digits in any number.");
                Console.WriteLine("Select an option");
                i = int.Parse(Console.ReadLine()); 
                UserChoice(i);
                Console.WriteLine("To continue press 1");
                Console.WriteLine("For exit press 0");
                i = int.Parse(Console.ReadLine());
            }
            while (i == 1);
        }

    }
}
