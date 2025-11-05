using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Basic.Collection
{
    public class Stud
    {
        public int Id {  get; set; }
        public string Name { get; set; }
        public string Course {  get; set; }
        public int Age {  get; set; }

        public Stud() { }
        public Stud(int id, string name, string course, int age)
        {
            Id = id;
            Name = name;
            Course = course;
            Age = age;
        }
        public override string ToString()
        {
            return $"Student[ Id: {Id},Name: {Name},Course: {Course},Age: {Age}]";
        }
    }

    public class College
    {
        public int Id { get; set; }
        public string ClgName { get; set; } 

        public College() { }

        public College(int id, string clgName)
        {
            Id = id;
            ClgName = clgName;
        }
        public override string ToString()
        {
            return $"College[ Id: {Id},College Name: {ClgName}]";
        }

    }

    public class ClgWiseSort: IComparer<College>
    {
        public int Compare(College x, College y)
        {
            return x.Id.CompareTo(y.Id);
        }
    }
    public class CollegeStudent
    {
        public static void Run()
        {
            SortedList<College, Stud> clgstud = new SortedList<College, Stud>(new ClgWiseSort());
            clgstud.Add(new College(3, "IMCC"), new Stud( 2, "Sharvari", "MCA", 24 ));
            clgstud.Add(new College(1, "PJOG"), new Stud(3, "Sakshi", "BSC", 23));
            clgstud.Add(new College(2, "SGM"), new Stud(1, "Ankita", "BCOM", 21));
            clgstud.Add(new College(5, "IMCC"), new Stud(4, "Rudra", "MCS", 28));

            foreach (var item in clgstud)

            {
                Console.WriteLine(item);
            }
        }
    }
}
