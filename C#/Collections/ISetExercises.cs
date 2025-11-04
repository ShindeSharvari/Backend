using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Collection
{
    public class ISetExercises
    {
        public static void Run()
        {
            //1.
            //ISet of student names
            ISet<string> names = new HashSet<string> {"Sharvari","Sakshi","Rakhi","Shivu","Radhika" };
            //Adding duplicates to check 
            names.Add("Sakshi");
            names.Add("Sidhi");

            foreach (var item in names)
            {
                Console.WriteLine(item);
            }

            //2.
            //Create two sets of integers and perform Union, Intersection, and Difference operations.
            Console.WriteLine("--------------------------------------------------------");
            ISet<int> nums1 = new HashSet<int> { 1,2,3,4,65,46,34,2,3};
            ISet<int> nums2 = new HashSet<int> { 2, 4, 24, 23, 65, 24, 234, 22 };

            // -------- UNION --------
            Console.WriteLine("---- Union Of Two Sets ----");
            //changes original so made  copy 
            ISet<int> unionSet = new HashSet<int>(nums1); 
            unionSet.UnionWith(nums2);
            foreach (var item in unionSet)
            {
                Console.WriteLine(item);
            }

            // -------- INTERSECTION --------
            Console.WriteLine("---- Intersection Of Two Sets ----");
            ISet<int> intersectSet = new HashSet<int>(nums1); 
            intersectSet.IntersectWith(nums2);
            foreach (var item in intersectSet)
            {
                Console.WriteLine(item);
            }

            // -------- DIFFERENCE --------
            Console.WriteLine("---- Difference Of Two Sets (nums1 - nums2) ----");
            ISet<int> differenceSet = new HashSet<int>(nums1); 
            differenceSet.ExceptWith(nums2);
            foreach (var item in differenceSet)
            {
                Console.WriteLine(item);
            }

            //3.
            //Create a SortedSet<string> with random names and display them in sorted order.
            Console.WriteLine("-------------------------------------------------------------");
            SortedSet<string> studNames = new SortedSet<string> { "Sharvari","Sakshi","Rakhi","Aayush","Ankita","Ganesh"};
            foreach (var name in studNames)
            {
                Console.WriteLine(name);
            }

            //4.
            //trying to add null in SortedSet
            studNames.Add(null);
            //But null is not taken in SortedSet
            foreach (var name in studNames)
            {
                Console.WriteLine(name);
            }

            //5.
            //Create a HashSet<int> and check whether two sets are equal using SetEquals().
            HashSet<int> n1 = new HashSet<int> {1,3,2,5,6,3};
            HashSet<int> n2 = new HashSet<int> { 1, 2, 3, 5, 6, 3 };
            HashSet<int> n3 = new HashSet<int> { 1, 3, 7, 6, 4 };
            Console.WriteLine($"Two sets are equal = {n1.SetEquals(n2)}");
            Console.WriteLine($"Two sets are equal = {n1.SetEquals(n3)}");

            //6.
            //Create a SortedSet<int> and remove all elements greater than 50.
            SortedSet<int> numbers = new SortedSet<int> { 2, 5, 3, 433, 35, 23, 43, 80, 24, 245 };
            numbers.RemoveWhere(x => x > 50);
            Console.WriteLine("------Elements greater than 50------");
            foreach (var item in numbers)
            {
                Console.WriteLine(item);
            }

            //7.
            //7. Find all elements that exist in one HashSet<int> but not in another.
            Console.WriteLine("--------------------------------------------------");
            Console.WriteLine("-----Present in first set but not in another -----");
            foreach (var item in n1.Except(n3))
            {
                Console.WriteLine(item);
            }

            //8.
            //Compare the behavior of List<int> and HashSet<int> when adding duplicates.
            List<int> l1 = new List<int> { 1, 45, 36, 3, 53, 2, 45 };
            Console.WriteLine("----List----");
            foreach (var item in l1)
            {
                Console.WriteLine(item);
            }
            // duplicates allowed 

            HashSet<int> h1 = new HashSet<int> { 7, 34, 3, 5, 3, 5, 7 };
            Console.WriteLine("-----HashSet----");
            foreach (var item in h1)
            {
                Console.WriteLine(item);
            }
            //duplicated not allowed

            //9.
            //Create a HashSet<string> and copy its elements into an array.
            HashSet<string> namesList = new HashSet<string> {"Sharvari","Sakshi","Rakhi","Shibu"};
            string [] arr = namesList.ToArray();
            foreach (var item in arr)
            {
                Console.WriteLine(item);   
            }


            //10.
            //Create a SortedSet<string> and display the first and last elements using Min and Max.
            Console.WriteLine("--------------------------------------------------");

            SortedSet<string> fruits = new SortedSet<string> { "Apple", "Mango", "Banana", "Grapes", "Orange" };

            Console.WriteLine($"First element (Min): {fruits.Min}");
            Console.WriteLine($"Last element (Max): {fruits.Max}");

        }
    }
}
