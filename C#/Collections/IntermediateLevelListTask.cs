using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Collection
{
    public class IntermediateLevelListTask
    {
        public static void Run()
        {
            // List created 
            List<int> numList = new List<int>();
            numList.Add(5);
            numList.Add(2);
            numList.Add(37);
            numList.Add(3);
            numList.Add(7);
            numList.Add(3);
            numList.Add(2);

            // Display list
            Console.WriteLine("-----Elements of numList------");
            foreach (var num in numList)
            {
                Console.WriteLine(num);
            }

            //1. Find Maximum and minimun values in list of integers
            Console.WriteLine($"Maximum value in numList = {numList.Max()}");
            Console.WriteLine($"Minimum value in numList = {numList.Min()}");

            //2.Count how many times a specific value appears in a list
            Console.WriteLine($"3 value in numList occurs = {numList.Count(x => x==3)} times");

            //Creating new list for merging
            List<int> numList2 = new List<int>();
            numList2.Add(6);
            numList2.Add(19);
            numList2.Add(32);
            numList2.Add(12);

            //3.Merging two list in one
            Console.WriteLine("--------------------------------------------");
            Console.WriteLine("Merging two list in one");
            numList.AddRange(numList2);
            Console.WriteLine("After merging list");
            foreach (var num in numList)
            {
                Console.WriteLine(num);
            }

            //4.Find all even numbers from a numList
            List<int> evenList = new List<int>();
            evenList = numList.FindAll(x => x % 2 == 0);
            Console.WriteLine("------Even numbers from numList------");
            foreach (var even in evenList)
            {
                Console.WriteLine(even);
            }


            //5. Use ForEach() to print elements in a numList
            Console.WriteLine("---------Printed using ForEach()-----------");
            numList.ForEach(x => Console.WriteLine(x));

            //6.Remove all elements greater than a given number
            Console.WriteLine("-----Elements after removing number greater than 28---");
            numList.RemoveAll(x=> x>28);
            numList.ForEach(x => Console.WriteLine(x));

            //7. Convert an array to a list and print all elements 
            Console.WriteLine("------------------------------------------------------");
            int[] numbers = new int[7];
            numbers[0] = 1;
            numbers[1] = 2;
            numbers[2] = 3;
            numbers[3] = 4;
            numbers[4] = 5;
            numbers[5] = 6;
            numbers[6] = 7;

            Console.WriteLine("----Array to list conversion----");
            List<int> newList = new List<int>();
            newList = numbers.ToList();
            newList.ForEach(x => Console.WriteLine(x));

            //8.Copy elements from a one list to another
            Console.WriteLine("-----------------------------------------------------------");
            List<int> copyList = new List<int>();
            copyList.AddRange(newList);
            Console.WriteLine("-------Copied To new List --------");
            copyList.ForEach(x => Console.WriteLine(x));

            //9. Get a sublist from a list(using GetRange())
            Console.WriteLine("------------------------------------------------------------");
            List<int> subList = new List<int>();
            subList =newList.GetRange(2, 4);
            subList.ForEach(x => Console.WriteLine(x));


            //Added negative number to check
            newList.Add(-8);
            //10. Check if all elements in a list are positive
            Console.WriteLine($"All elements in newList are positive = {newList.All(x=> x>0)}");

        }
    }
}
