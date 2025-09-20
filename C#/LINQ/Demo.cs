using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.LINQ
{
    public class Demo
    {
       class Student
       {
          public  int  Id { get; set; }
          public string Name { get; set; }

         public override string ToString()
         {
           return $"Student Id :{Id} , Name :{Name}";
         }
       }

        public static void Task()
        {
            
            Student s1 = new Student { Id = 7, Name = "Aman" };
            Student s2 = new Student { Name = "Babar", Id = 9 };
            Student s3 = new Student { Id = 7, Name = "Akbar" };
            Student s4 = new Student { Name = "Birbal", Id = 1 };

            Student[] slist = new Student[4] { s1, s2, s3, s4 }; 

            foreach (Student s in slist)
            {
                Console.WriteLine(s);
            }
            Console.WriteLine("++++++++++++++++++++++");
            slist = slist.OrderBy(ob => ob.Id).ThenBy(ob => ob.Name).ToArray();

            foreach (Student s in slist)
            {
                Console.WriteLine(s);
            }

        }
    }

}
