using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Collection
{
    public class Emp
    {
        public int Id {  get; set; }
        public string Name { get; set; }
        public int Salary {  get; set; }

        public Emp() { }

        public Emp(int id, string name, int salary)
        {
            this.Id = id;
            this.Name = name;
            this.Salary = salary;
        }
    }
    public class IlistOperations
    {
        public static void Run()
        {
            //1.
            //Create list of city names
            IList<string> city = new List<string>();
            city.Add("Karad");
            city.Add("Pune");
            city.Add("Satara");
            city.Add("Mumbai");

            //display list of city
            foreach (var names in city)
            {
                Console.WriteLine(names);
            }

            //Removing from list
            city.Remove("Satara");

            //Inserting at specific index
            city.Insert(1, "Kolhapur");

            Console.WriteLine("-------After Operations------");
            foreach (var names in city)
            {
                Console.WriteLine(names);
            }


            //2.
            Console.WriteLine("----------------------------------------------------");
            //Create a Ilist of numbers
            IList<int> num = new List<int>();
            num.Add(5);
            num.Add(10);
            num.Add(15);
            num.Add(12);
            num.Add(14);

            Console.WriteLine("Enter the number to check if exist or not");
            int userNum = int.Parse(Console.ReadLine());

            Console.WriteLine($"{userNum} exists in list = {num.Contains(userNum)}");

            //3.
            Console.WriteLine("------------------------------------------------------");
            //create a list of marks 
            IList<int> marks = new List<int>();
            marks.Add(43);
            marks.Add(30);
            marks.Add(54);
            marks.Add(10);
            marks.Add(29);
            marks.Add(2);


            Console.WriteLine("-----Ascending sort of marks------");
            IList<int> ascendingSort = new List<int>();
            ascendingSort = marks.OrderBy(x => x).ToArray();

            foreach (var mark in ascendingSort)
            {
                Console.WriteLine(mark);
            }
            Console.WriteLine("-----Descending sort of marks------");
            IList<int> descendingSort = new List<int>();
            descendingSort = marks.OrderByDescending(x => x).ToArray();
            foreach (var mark in descendingSort)
            {
                Console.WriteLine(mark);
            }

            //4.
            Console.WriteLine("---------------------------------------------------");
            //Create a list of students names 
            IList<string> studNames = new List<string>();
            studNames.Add("Sharvari");
            studNames.Add("Shivu");
            studNames.Add("Sakshi");
            studNames.Add("Rakhi");

            //replace 3rd element
            studNames[2] = "Sakhu";
            foreach (var item in studNames)
            {
                Console.WriteLine(item);
            }


            //5.
            Console.WriteLine("----------------------------------------------------");
            //Create a list 
            List<int> numbers = new List<int>();
            numbers.Add(1);
            numbers.Add(2);
            numbers.Add(3);
            numbers.Add(4);
            numbers.Add(5);

            IReadOnlyCollection<int> numbers2 = numbers.AsReadOnly();
            //numbers2.Add(5);    // this gives error 
            numbers.Add(5);       // this add new element

            foreach (var item in numbers)
            {
                Console.WriteLine(item);
            }

            //6.
            Console.WriteLine("-----------------------------------------------------");
            IList<Emp> employees = new List<Emp>();
            employees.Add(new Emp(1,"Sharvari",28000));
            employees.Add(new Emp(2, "Sakshi", 40000));
            employees.Add(new Emp(3, "Shrvu", 19000));

            var greater = employees.Where(x => x.Salary > 30000);
            foreach (var item in greater)
            {
                Console.WriteLine(item.Name);
            }


            //7.
            Console.WriteLine("----------------------------------------------------");
            IList<int> list = new List<int>();
            list.Add(45);
            list.Add(47);
            list.Add(21);
            list.Add(04);
            list.Add(21);
            list.Add(73);
            list.Add(47);

            Console.WriteLine($"Maximum number from list = {list.Max()}");
            Console.WriteLine($"Minimum number from list = {list.Min()}");


            //8.
            Console.WriteLine("-----------------------------------------------------");
            //removing duplicates
            var unique =list.Distinct();
            Console.WriteLine("Unique Elements from list");
            foreach (var item in unique)
            {
                Console.WriteLine(item);
            }

            //9.
            Console.WriteLine("-----------------------------------------------------");
            IList<string> fruits = new List<string>();
            fruits.Add("Apple");
            fruits.Add("Banana");
            fruits.Add("Kiwi");
            fruits.Add("Pineapple");

            IList<string> newfruits = new List<string>();
            newfruits.Add("Strawberry");
            newfruits.Add("Kiwi");
            newfruits.Add("Blueberry");

            //merging two list and getting unique
            fruits.Concat(newfruits).Distinct();
            Console.WriteLine("New fruit list after merge");
            foreach (var fruit in fruits)
            {
                Console.WriteLine(fruit);
            }

            //10.
            Console.WriteLine("---------------------------------------------------------");
            Console.WriteLine("original list");
            foreach (var item in list)
            {
                Console.WriteLine(item);
            }

            Console.WriteLine("After reversing list");
            foreach (var item in list.Reverse())
            {
                Console.WriteLine(item);
            }


        }

    }
}
