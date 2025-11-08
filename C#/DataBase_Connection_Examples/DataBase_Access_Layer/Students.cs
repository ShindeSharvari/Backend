using Basic.DataBase_Example.DataBase_Access_Layer;
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
        public static void UserChoice(int option)
        {
            switch (option)
            {
                case 1:
                    StudentRepository.Insert();
                    break;

                case 2:
                    StudentRepository.Delete();
                    break;

                case 3:
                    StudentRepository.Update();
                    break;

                default:
                    Console.WriteLine("Invalid Option");
                    break;
            }
        }
        public static void Run()
        {

            int i = 0;
            do
            {
                Console.WriteLine("-------------------------------------------------------------------------");
                Console.WriteLine("1.To Insert Student Details");
                Console.WriteLine("2.To Delete Record");
                Console.WriteLine("3.To Update Record");
                i = int.Parse(Console.ReadLine());
                UserChoice(i);
                Console.WriteLine("To continue press 1 \nFor exit press 0");
                i = int.Parse(Console.ReadLine());

            }
            while (i == 1);
            }
    }
}

