using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;

namespace Basic.DataBase_Example
{
    public class Emp
    {
        public int EmpId { get; set; }
        public string EmpName { get; set; }
        public double EmpSalary { get; set; }
        public DateTime DateOfJoining { get; set; }
        public string Email { get; set; }
        public string Phone { get; set; }
        public string Designation { get; set; }
        public Emp() {
            EmpName = "Not Assigned";
            EmpSalary = 0.0;
            DateOfJoining = DateTime.Now;
            Email = "Not Assigned";
            Phone = "Not Assigned";
            Designation = "Not Assigned";
        }
        public Emp(string empName, double empSalary, DateTime dateOfJoining, string email, string phone, string designation) {
            EmpName = empName;
            EmpSalary = empSalary;
            DateOfJoining = dateOfJoining;
            Email = email;
            Phone = phone;
            Designation = designation;
        }
        public override string ToString() { return $"Employee[Name: {EmpName}, Salary: {EmpSalary}, DOJ: {DateOfJoining.ToShortDateString()}, Email: {Email}, Phone: {Phone}, Designation: {Designation}]"; }
    }
    public class App
    {
        public static void Run()
        {
            Emp e1 = new Emp("Sharvari", 400000, new DateTime(2024, 03, 01),
                             "shindesharvari003@gmail.com", "9876543210", "Software Developer");

            string query = "INSERT INTO Emp (EmpName, EmpSalary, DateOfJoining, Email, Phone, Designation) VALUES (@name, @salary, @doj, @Email, @Phone, @Designation)";

            string conStr = "server=(localdb)\\MSSQLLocalDB;Database=EmployeeDB;Trusted_Connection=True;";

            SqlConnection con = new SqlConnection(conStr);
            con.Open();

            SqlCommand cmd = new SqlCommand(query, con);

            cmd.Parameters.Add("@name", SqlDbType.VarChar).Value = e1.EmpName;
            cmd.Parameters.Add("@salary", SqlDbType.Float).Value = e1.EmpSalary;
            cmd.Parameters.Add("@doj", SqlDbType.Date).Value = e1.DateOfJoining;
            cmd.Parameters.Add("@Email", SqlDbType.VarChar).Value = e1.Email;
            cmd.Parameters.Add("@Phone", SqlDbType.VarChar).Value = e1.Phone;
            cmd.Parameters.Add("@Designation", SqlDbType.VarChar).Value = e1.Designation;

            int res = cmd.ExecuteNonQuery();

            string msg = res > 0 ? "Employee Inserted Successfully" : "Insert Failed";
            Console.WriteLine(msg);

            //delete query
            string deleteQuery = "DELETE FROM Emp WHERE EmpId = @id";
            //DELETE CODE
            SqlCommand deleteCmd = new SqlCommand(deleteQuery, con);
            deleteCmd.Parameters.Add("@id", SqlDbType.Int).Value = 6;   // you can take input from user instead

            int deleteResult = deleteCmd.ExecuteNonQuery();
            Console.WriteLine(deleteResult > 0 ? "Employee Deleted Successfully" : "Delete Failed");

            con.Close();

        }
    }
}