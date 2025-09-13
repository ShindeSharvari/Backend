using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Constructor
{
    public class Person
    {
        private string name;
        private int age;

        public Person() { }

        public Person(string name, int age)
        {
            this.name = name;
            this.age = age;
        }

        public Person(string name)
        {
            this.name = name;
        }

        public void printPerson()
        {
            Console.WriteLine($"Person[Name: {this.name}, Age: {this.age}]");
        }

        public int returnAge()
        {
            return age;
        }

        public bool isOfLegalAge()
        {
            return (this.age >= 18);
        }

        public string getName()
        {
            return name;
        }

        public void growOlder()
        {
            this.age++;
        }
    }

    public class PersonApps
    {
        public static void Task()
        {
            Person p1 = new Person("Sharvari",24);
            p1.printPerson();
            Console.WriteLine($"Age : {p1.returnAge()}");
            Console.WriteLine($"Is {p1.returnAge()} is legal or not = {p1.isOfLegalAge()}");
            Console.WriteLine($"Name : {p1.getName()}");
            p1.growOlder();
            Console.WriteLine($"Grown Age : {p1.returnAge()}");

            Person p2 = new Person("Shravan", 17);
            p1.printPerson();
            Console.WriteLine($"Age : {p2.returnAge()}");
            Console.WriteLine($"Is {p2.returnAge()} is legal or not = {p2.isOfLegalAge()}");
            Console.WriteLine($"Name : {p2.getName()}");

        }
    }
}
