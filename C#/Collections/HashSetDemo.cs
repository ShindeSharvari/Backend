using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Collection
{
    public class HashSetDemo
    {
        public static void Run()
        {
            HashSet<int> nums = new HashSet<int>();
            nums.Add(1);
            nums.Add(2);
            nums.Add(3);
            nums.Add(4);
            nums.Add(2);
            nums.Add(5);
            nums.Add(6);
            nums.Add(7);

            foreach (var item in nums)
            {
                Console.WriteLine(item);
            }

            ISet<int> numSet = new HashSet<int>();
            numSet.Add(1);
            numSet.Add(2);
            numSet.Add(3);
            numSet.Add(4);
            numSet.Add(2);
            numSet.Add(5);
            numSet.Add(6);
            numSet.Add(7);

            foreach (var item in numSet)
            {
                Console.WriteLine(item);
            }


            SortedSet<string> stud = new SortedSet<string>();
            stud.Add("Sharvari");
            stud.Add("Sakshi");
            stud.Add("Rakhi");
            stud.Add(null);
            stud.Add("Shivu");

            foreach (var item in stud)
            {
                Console.WriteLine(item);
            }

        }
    }
}
