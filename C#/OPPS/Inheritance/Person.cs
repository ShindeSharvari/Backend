using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Inheritance
{
    class Person
    {
        public int Id { get; set; }
        public string Name { get; set; }

        public override string ToString()
        {
            return $"{Id} ,{Name}";
        }

    }

    class Student : Person
    {

        public double Marks { get; set; }

        public override string ToString()
        {
            return $"Student[ {base.ToString()}, {this.Marks}]";
        }

        public void F1() { }
    }
    class Teacher : Person
    {


        public double Salary { get; set; }
        public override string ToString()
        {
            return $"Techer[{base.ToString()} , {Salary}]";
        }
    }

    public  class FileDemo
        {
            public static void Task()
            {
            Person s = new Student() { Id = 1, Name = "Sharvari", Marks = 78 };
            Console.WriteLine(s);
            // s.F1();
        }
    }
}
