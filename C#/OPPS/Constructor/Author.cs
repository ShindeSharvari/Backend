using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Constructor
{
    public class Author
    {
        private string name;
        private string email;
        private char gender;

        public Author()
        {
           
        }

        public Author(string name, string email, char gender)
        {
            SetEmail(email);
            this.name = name;
            this.gender = gender;

        }
        public void SetEmail(string email)
        {
            try
            {
                if (!ValidateEmail(email))
                {
                    throw new InvalidEmailException("Invalid Email");
                }

                this.email = email; // valid email assigned
            }
            catch (InvalidEmailException ex)
            {
                // Handle exception internally
                Console.WriteLine("Error: " + ex.Message);
                // Email not set, program continues
            }
        }
        public void setName(string name)
        {
            this.name = name;
        }

        public void setGender(char gender)
        {
            this.gender = gender;
        }
        public string getEmail(){ return this.email; }

        public string getName() { return this.name; }

        public char getGender() { return this.gender; }
        public class InvalidEmailException : Exception
        {
            public InvalidEmailException(string message):base(message)
            {

            }
        }

        public bool ValidateEmail(string e)
        {
            // check string is not empty and checks @ . using contions method
            //IsNullOrWhiteSpace important becoz if empty string entered it will throw exception for conatins method
             return !string.IsNullOrWhiteSpace(e) && e.Contains('@') && e.Contains('.') ;
        }

        public override string ToString()
        {
            return $"Author[Name : {name}, Email :{email}, Gender : {gender}]";
        }
    }

    public class AuthorApp
    {
        public static void Task()
        {
            Author a1 = new Author("Sharvari","sharvaishinde003@gmail.com",'F');
            Console.WriteLine(a1);
            Console.WriteLine("---------------------------------------");

            Author a2 = new Author();
            a2.setName("Shiv");
            a2.setGender('M');
            a2.SetEmail("shiveshinde.com");
            Console.WriteLine($"Name : {a2.getName()}");
            Console.WriteLine(a2);
        }
    }
}
