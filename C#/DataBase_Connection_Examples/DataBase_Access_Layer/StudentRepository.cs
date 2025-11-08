using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.DataBase_Example.DataBase_Access_Layer
{
    public class StudentRepository
    {
        public static void Insert()
        {
            Students s1 = new Students();

            Console.WriteLine("Enter the name");
            s1.StudName = Console.ReadLine();
            Console.ReadLine();
            Console.WriteLine("Enter the age");
            s1.StudAge=int.Parse(Console.ReadLine());
            Console.WriteLine("Enter city");
            s1.City = Console.ReadLine();
            Console.WriteLine("Enter phone number");
            s1.Phone=long.Parse(Console.ReadLine());
            Console.ReadLine();
            Console.WriteLine("Enter email");
            s1.Email=Console.ReadLine();


            string query = "Insert into Stud (StudentName,Age,City,Phone,Email) values(@name,@age,@city,@phone,@email)";
            string conStr = "server=(localdb)\\MSSQLLocalDB;Database=StudentDB;Trusted_Connection=True;";

            SqlConnection con = new SqlConnection(conStr);
            con.Open();

            SqlCommand cmd = new SqlCommand(query, con);
            cmd.Parameters.Add("@name", SqlDbType.VarChar).Value = s1.StudName;
            cmd.Parameters.Add("@age", SqlDbType.Int).Value = s1.StudAge;
            cmd.Parameters.Add("@city", SqlDbType.VarChar).Value = s1.City;
            cmd.Parameters.Add("@phone", SqlDbType.BigInt).Value = s1.Phone;
            cmd.Parameters.Add("@email", SqlDbType.VarChar).Value = s1.Email;

            int res = cmd.ExecuteNonQuery();

            string msg = res > 0 ? "Student Inserted Successfully" : "Insert Failed";
            Console.WriteLine(msg);
            con.Close();
        }

        public static void Delete()
        {
            int delId;
            Console.WriteLine("Enter the Id to delete");
            delId = int.Parse(Console.ReadLine());
            string delQuery = "DELETE FROM Stud WHERE StudentId = @id";
            string conStr = "server=(localdb)\\MSSQLLocalDB;Database=StudentDB;Trusted_Connection=True;";

            SqlConnection con = new SqlConnection(conStr);
            con.Open();

            SqlCommand deleteCmd = new SqlCommand(delQuery, con);


            deleteCmd.Parameters.Add("@id", SqlDbType.Int).Value = delId; 

            int deleteResult = deleteCmd.ExecuteNonQuery();
            Console.WriteLine(deleteResult > 0 ? "Student Deleted Successfully" : "Delete Failed");
            con.Close();
        }

        public static void Update()
        {
            Students s1 = new Students();

            Console.WriteLine("Enter Student Id to update:");
            s1.StudId = int.Parse(Console.ReadLine());

            Console.WriteLine("Enter the name");
            s1.StudName = Console.ReadLine();

            Console.WriteLine("Enter the age");
            s1.StudAge = int.Parse(Console.ReadLine());

            Console.WriteLine("Enter city");
            s1.City = Console.ReadLine();

            Console.WriteLine("Enter phone number");
            s1.Phone = long.Parse(Console.ReadLine());

            Console.WriteLine("Enter email");
            s1.Email = Console.ReadLine();

            string query = @"UPDATE Stud
                     SET StudentName = @name,
                         Age = @age,
                         City = @city,
                         Phone = @phone,
                         Email = @email
                     WHERE StudentId = @id";

            string conStr = "server=(localdb)\\MSSQLLocalDB;Database=StudentDB;Trusted_Connection=True;";

            SqlConnection con = new SqlConnection(conStr);
            con.Open();

            SqlCommand cmd = new SqlCommand(query, con);

            cmd.Parameters.Add("@id", SqlDbType.Int).Value = s1.StudId; 
            cmd.Parameters.Add("@name", SqlDbType.VarChar).Value = s1.StudName;
            cmd.Parameters.Add("@age", SqlDbType.Int).Value = s1.StudAge;
            cmd.Parameters.Add("@city", SqlDbType.VarChar).Value = s1.City;
            cmd.Parameters.Add("@phone", SqlDbType.BigInt).Value = s1.Phone;
            cmd.Parameters.Add("@email", SqlDbType.VarChar).Value = s1.Email;

            int res = cmd.ExecuteNonQuery();

            string msg = res > 0 ? "Student Updated Successfully" : "Update Failed";
            Console.WriteLine(msg);

            con.Close();
        }

    }
}
