using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Constructor
{
    public class Employee
    {
        private int id;
        private string firstName;
        private string lastName;
        private int salary;

        public Employee() { }

        public Employee(int id, string firstName, string lastName, int salary)
        {
            this.id= id;
            this.firstName= firstName;
            this.lastName= lastName;
            this.salary= salary;
        }


        public int getId() { return id; }
        public string getFirstName() { return firstName; }
        public string getLastName() { return lastName; }

        public int getSalary() { return salary; }

        public void setSalary(int salary) { this.salary = salary; }

        public int getAnnualSalary()
        {
            return this.salary * 12;
        }

        public string raiseSalary(double per)
        {
            double newSalary = this.salary * (1 + per * 0.01);

            return $"New salary after {per} percent hike = {newSalary}";
        }

        public string getName()
        {
            return this.firstName +" " +this.lastName;
        }
        public override string ToString()
        {
            return $"Employee[Id : {this.id}, Name : {this.getName()}, Salary : {this.salary}]";
        }

    }

    public class EmployeeApp
    {
        public static void Task()
        {
            Employee e1 = new Employee(1,"Sharvari","Shinde",0);
            e1.setSalary(300000);
            Console.WriteLine(e1);
            Console.WriteLine($"Annual Salary : {e1.getAnnualSalary()}");
            Console.WriteLine(e1.raiseSalary(15));
            Console.WriteLine($"Employee Full Name : {e1.getName()}");

        }
    }
}
