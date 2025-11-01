using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Collection
{
    public class Student : IComparable<Student>
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public int Age { get; set; }
        public string Course { get; set; }
        public Student()
        {
            Id = 1;
            Name = "Sakshi";
            Age = 21;
            Course = "abc";
        }
        public Student(int id, string name, int age, string course)
        {
            Id = id;
            Name = name;
            Age = age;
            Course = course;
        }
        public override string ToString()
        {
            return $"Student[Id={Id},Name={Name},Age={Age},Course={Course}]";
        }

        //public int CompareTo(Student ob)
        //{ 
        //    if (this.Id > ob.Id)
        //        return 1;
        //    else if (this.Id < ob.Id)
        //        return -1;
        //    else
        //        return 0;
        //}

        public int CompareTo(Student ob)
        {
            return this.Name.CompareTo(ob.Name);
        }
    }

    public class Task3
    {
        public static void Task()
        {
            Student s1 = new Student();
            Student s2 = new Student(3, "Sharvari", 24, "MCA");
            Student s3 = new Student(4, "Rakhi", 21, "BSC");
            Student s4 = new Student(2, "Sharvari", 18, "BSC");

            //Custom data type collection
            List<Student> stud = new List<Student>();
            stud.Add(s1);
            stud.Add(s2);
            stud.Add(s3);
            stud.Add(s4);

            foreach (var item in stud)
            {
                Console.WriteLine(item);
            }
            stud.Sort();

            foreach (var item in stud)
            {
                Console.WriteLine(item);
            }


            // easiest way
            stud.Sort((o1,o2)=>o1.Id.CompareTo(o2.Id));
            stud.ForEach(Console.WriteLine);
        }
    }
}