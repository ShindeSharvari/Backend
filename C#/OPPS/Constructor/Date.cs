using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Constructor
{
        public class Date
        {
            private int day;
            private int month;
            private int year;

            public Date() { }

            public Date(int day, int month, int year)
            {
                SetDate(day, month, year);
            }

            public void SetDate(int day, int month, int year)
            {
                SetDay(day);
                SetMonth(month);
                SetYear(year);
            }

        public void SetDay(int day)
        {
            try
            {
                if (day < 1 || day > 31)
                    throw new Exception("Day must be between 1 and 31.");
                this.day = day;
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error in SetDay: " + ex.Message);
            }
        }

        public void SetMonth(int month)
        {
            try
            {
                if (month < 1 || month > 12)
                    throw new Exception("Month must be between 1 and 12.");
                this.month = month;
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error in SetMonth: " + ex.Message);
            }
        }

        public void SetYear(int year)
        {
            try
            {
                if (year < 1000 || year > 9999)
                    throw new Exception("Year must be between 1000 and 9999.");
                this.year = year;
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error in SetYear: " + ex.Message);
            }
        }


        public int GetDay() { return this.day; }
            public int GetMonth() { return this.month; }
            public int GetYear() { return this.year; }

            public override string ToString()
            {
                return $"{this.day:D2}/{this.month:D2}/{this.year:D4}";
            }
        }

        public class DateApp
        {
          public static void Task()
           {
                Date d1 = new Date(23, 6, 2021);
                Console.WriteLine(d1);

                Date d2 = new Date();
                d2.SetDate(4, 1, 2001);
                Console.WriteLine(d2);

                // Invalid input → handled here
                Date d3 = new Date(99, 50,2000);
                Console.WriteLine(d3);

                Date d4 = new Date();
                d4.SetDay(12);
                d4.SetMonth(5);
                d4.SetYear(2008);
                Console.WriteLine(d4);
            
            }
       }
}
