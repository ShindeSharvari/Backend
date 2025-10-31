using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Collection
{
    public class BegineerLevelListTask
    {
        public static void Run()
        {
            //1. Created list of integers
            List<int> numberList = new List<int>();
            //Adding elements to list
            numberList.Add(1);
            numberList.Add(5);
            numberList.Add(2);
            numberList.Add(4);
            numberList.Add(0);
            numberList.Add(3);
            numberList.Add(7);

            //Printing all elements
            Console.WriteLine("Elements of list ");
            foreach (var item in numberList)
            {
                Console.WriteLine(item);
            }


            //2.Create list of strings and display them
            Console.WriteLine("---------------------------------------");
            List<string> nameList = new List<string>();
            nameList.Add("Sharvari");
            nameList.Add("Sakshi");
            nameList.Add("Rakhi");
            nameList.Add("Samruddhi");
            nameList.Add("Shravan");

            //Displaying Names
            Console.WriteLine("Names from nameList");
            foreach (var name in nameList)
            {
                Console.WriteLine(name);
            }

            //3. Removing Specific element from nameList
            nameList.Remove("Samruddhi");

            //Displaying Names after removing
            Console.WriteLine("------Names from nameList after removing------");
            foreach (var name in nameList)
            {
                Console.WriteLine(name);
            }

            //4. Check if a list contains a particular value
            Console.WriteLine($"Sakshi name is present in list = {nameList.Contains("Sakshi")}");

            //5. Find the count of elements in a list
            Console.WriteLine($"Count of elements in a nameList = {nameList.Count}");

            //6. Insert an element at a specific index in a list 
            nameList.Insert(3, "Praju");

            Console.WriteLine("---nameList after inserting at specific index---");
            foreach (var name in nameList)
            {
                Console.WriteLine(name);
            }


            //8. Reverse the elements of a list 
            nameList.Reverse();
            Console.WriteLine("---nameList after reversing---");
            foreach (var name in nameList)
            {
                Console.WriteLine(name);
            }

            //10. Get the first and last elements from a list
            Console.WriteLine($"First element from nameList = {nameList[0]}");
            Console.WriteLine($"Last element from nameList = {nameList[(nameList.Count)-1]}");


            //7. Clear all elements from nameList
            nameList.Clear();
            //To chekc all cleared or not 
            Console.WriteLine($"Count of elements in nameList = {nameList.Count}");


            Console.WriteLine("---------------------------------------");
            //9.Sort numberList in ascending order
            numberList.Sort();
            Console.WriteLine("numberList after ascending order");
            foreach (var num in numberList)
            {
                Console.WriteLine(num);
            }
        }
    }
}
