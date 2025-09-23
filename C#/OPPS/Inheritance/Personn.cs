using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Inheritance
{
    public class Personn
    {
        public string Name { get; set; }
        public string Address {  get; set; }

        public Personn()
        {

        }
        public Personn(string name, string address)
        {
            Name = name;
            Address = address;
        }

        public override string ToString()
        {
            return $"Person[Name: {Name},Address: {Address}]";
        }
    }
    public class Studentt:Personn
    {
        public string Program {  get; set; }
        public int Year { get; set; }
        public double Fee {  get; set; }

        public Studentt() : base()
        {

        }

        public Studentt(string name,string address,string program,int year,double fee):base(name,address)
        {
            Program = program;
            Year = year;
            Fee = fee;
        }

        public override string ToString()
        {
            return $"Student[ Person [Name: {Name}, Address: {Address} ], Program: {Program}, Year: {Year}, Fee:{Fee} ]";
        }

    }
    public class Staff:Personn
    {
        public string School {  get; set; } 
        public double Pay {  get; set; }

        public Staff() : base() { }

        public Staff(string name,string address,string school, double pay):base(name,address)
        {
            School = school;
            Pay = pay;
        }

        public override string ToString()
        {
            return $"Staff[Person[ Name: {Name}, Address: {Address} ], School: {School}, Pay: {Pay}]";
        }
    }

    public class Member
    {
        public static void Task()
        {
            Studentt s1 = new Studentt("Sharvari", "Karad", "MCA", 2022, 200000);
            Console.WriteLine(s1);

            Staff st1 = new Staff("Sandesh","Pune","SGM",40000);
            Console.WriteLine(st1);
        }
    }
}

