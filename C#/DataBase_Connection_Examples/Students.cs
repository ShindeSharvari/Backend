using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.DataBase_Example
{
    public class Students
    {
        public int StudId { get; set; }
        public string StudName { get; set; }
        public int StudAge {  get; set; }
        public string City {  get; set; }
        public long Phone {  get; set; }
        public string Email {  get; set; }

        public Students()
        {
            StudName = "Not Assigned";
            StudAge = 0;
            City = "Not Assigned";
            Phone = 0;
            Email = "Not Assigned";
        }

        public Students(string studName, int studAge, string city, long phone, string email)
        {
            StudName = studName;
            StudAge = studAge;
            City = city;
            Phone = phone;
            Email = email;
        }
        public override string ToString()
        {
            return $"Student Details [Name: {StudName}, Age: {StudAge}, City: {City}, Phone: {Phone}, Email: {Email}]";
        }
    }

    public class StudApp
    {
        public static void Run()
        {
            Students s1 = new Students("Sharvari", 24, "Pune", 9876543210, "shindesharvari003@gmail.com");

            string query = "Insert into Stud (StudentName,Age,City,Phone,Email) values(@name,@age,@city,@phone,@email)";

            string conStr = "server=(localdb)\\MSSQLLocalDB;Database=StudentDB;Trusted_Connection=True;";

            SqlConnection con = new SqlConnection(conStr);
            con.Open();

            SqlCommand cmd = new SqlCommand(query, con);

            // Adding parameters like you wanted
            cmd.Parameters.Add("@name", SqlDbType.VarChar).Value = s1.StudName;
            cmd.Parameters.Add("@age", SqlDbType.Int).Value = s1.StudAge;
            cmd.Parameters.Add("@city", SqlDbType.VarChar).Value = s1.City;
            cmd.Parameters.Add("@phone", SqlDbType.BigInt).Value = s1.Phone;
            cmd.Parameters.Add("@email", SqlDbType.VarChar).Value = s1.Email;

            // 3. Insert record
            int res = cmd.ExecuteNonQuery();

            string msg = res > 0 ? "Student Inserted Successfully" : "Insert Failed";
            Console.WriteLine(msg);

            con.Close();
        }
    }
}

