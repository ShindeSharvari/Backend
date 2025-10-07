using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Interface
{
    public interface IInstrument
    {
        void Play();
        string What();
        void Adjust();
    }
    public class Wind : IInstrument
    {
        public void Play()
        {
            Console.WriteLine("Wind instrument is playing.");
        }

        public string What()
        {
            return "Wind Instrument";
        }

        public void Adjust()
        {
            Console.WriteLine("Adjusting the Wind instrument.");
        }
    }
    public class Percussion : IInstrument
    {
        public void Play()
        {
            Console.WriteLine("Percussion instrument is playing.");
        }

        public string What()
        {
            return "Percussion Instrument";
        }

        public void Adjust()
        {
            Console.WriteLine("Adjusting the Percussion instrument.");
        }
    }
    public class Stringed : IInstrument
    {
        public void Play()
        {
            Console.WriteLine("Stringed instrument is playing.");
        }

        public string What()
        {
            return "Stringed Instrument";
        }

        public void Adjust()
        {
            Console.WriteLine("Adjusting the Stringed instrument.");
        }
    }
    public class Woodwind : Wind
    {
        public new string What()
        {
            return "Woodwind Instrument";
        }
    }
    public class Brass : Wind
    {
        public new void Adjust()
        {
            Console.WriteLine("Adjusting the Brass instrument.");
        }
    }


    public class Orchestra
    {
        public static void Task()
        {
            Wind wind = new Wind();
            Console.WriteLine("--- Wind ---");
            wind.Play();
            Console.WriteLine(wind.What());
            wind.Adjust();
            Console.WriteLine();

            Percussion percussion = new Percussion();
            Console.WriteLine("--- Percussion ---");
            percussion.Play();
            Console.WriteLine(percussion.What());
            percussion.Adjust();
            Console.WriteLine();

            Stringed stringed = new Stringed();
            Console.WriteLine("--- Stringed ---");
            stringed.Play();
            Console.WriteLine(stringed.What());
            stringed.Adjust();
            Console.WriteLine();

            Woodwind woodwind = new Woodwind();
            Console.WriteLine("--- Woodwind ---");
            woodwind.Play();
            Console.WriteLine(woodwind.What());
            woodwind.Adjust();
            Console.WriteLine();

            Brass brass = new Brass();
            Console.WriteLine("--- Brass ---");
            brass.Play();
            Console.WriteLine(brass.What());
            brass.Adjust();
        }
    }
}
