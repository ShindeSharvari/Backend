using System;
using System.Collections.Generic;
using System.Configuration;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Constructor
{
    public class Time
    {
        private int second;
        private int minute;
        private int hour;

        // Default constructor
        public Time()
        {
            this.second = 0;
            this.minute = 0;
            this.hour = 0;
        }

        // Parameterized constructor
        public Time(int hour, int minute, int second)
        {
            setTime(hour,minute,second);
        }

        public int getSecond() { return second; }
        public int getMinute() { return minute; }
        public int getHour() { return hour; }

        public void setSecond(int second)
        {
            if (second >= 0 && second < 60)
                this.second = second;
        }

        public void setMinute(int minute)
        {
            if (minute >= 0 && minute < 60)
                this.minute = minute;
        }

        public void setHour(int hour)
        {
            if (hour >= 0 && hour < 24)
                this.hour = hour;
        }

        public void setTime(int hour, int minute, int second)
        {
            setHour(hour);
            setMinute(minute);
            setSecond(second);
        }

        public override string ToString()
        {
            return $"{hour:D2}:{minute:D2}:{second:D2}";
        }

        public Time nextSecond()
        {
            second++;
            if (second >= 60)
            {
                second = 0;
                minute++;
                if (minute >= 60)
                {
                    minute = 0;
                    hour++;
                    if (hour >= 24)
                    {
                        hour = 0;
                    }
                }
            }
            return this;
        }
    }

    public class TimeApp
    {
        public static void Task()
        {
            Time t1 = new Time();
            Time t2 = new Time(12,56,34);

            Console.WriteLine($"Default Time : {t1}");
            Console.WriteLine($"Custom Time : {t2}");

            Console.WriteLine($"Minutes : {t2.getMinute()}");
            Console.WriteLine($"Hours : {t2.getHour()}");

            Console.WriteLine(t2.ToString());

            Time t3 = new Time();
            t3.setTime(17,25,58);
            Console.WriteLine(t3);

            t3.nextSecond();
            Console.WriteLine($"After increment : {t3}");
        }
    }
}
