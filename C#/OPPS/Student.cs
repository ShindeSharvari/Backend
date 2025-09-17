using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS
{
    public class Student
    {
        public int id;
        public string name;
        public int age;
        public static int cnt=0;

        public Student()
        {
            cnt++;
        }
        public Student(int id, string name, int age)
        {
            this.id = id;
            this.name = name;
            this.age = age;
            cnt++;
        }
        public Student(string name, int age)
        {
            this.name = name;   
            this.age = age;
            cnt++;
        }
        public Student(string name)
        {
            this.name = name;
            cnt++;
        }
    }

    public class StudentApp
    {
        public static void Task()
        {
            Student s1 = new Student("Sharvari");
            Student s2 = new Student(1, "Shiv", 20);
            Student s3 = new Student("Sakshi", 24);

            Console.WriteLine($"Total Number of students : {Student.cnt}");
        }
    }
}
