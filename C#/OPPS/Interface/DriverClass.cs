using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Interface
{
    public interface IDriveable
    {
        void Start();
        void Forward();
        void Turn(double angle);
        void Stop();
    }

    public class Bicycle : IDriveable
    {
        public void Start()
        {
            Console.WriteLine("Bicycle started pedaling.");
        }

        public void Forward()
        {
            Console.WriteLine("Bicycle is moving forward.");
        }

        public void Turn(double angle)
        {
            Console.WriteLine($"Bicycle turned {angle} degrees.");
        }

        public void Stop()
        {
            Console.WriteLine("Bicycle stopped.");
        }

        public override string ToString()
        {
            return "This is a Bicycle.";
        }
    }

    public class Car : IDriveable
    {
        public void Start()
        {
            Console.WriteLine("Car engine started.");
        }

        public void Forward()
        {
            Console.WriteLine("Car is moving forward.");
        }

        public void Turn(double angle)
        {
            Console.WriteLine($"Car turned {angle} degrees.");
        }

        public void Stop()
        {
            Console.WriteLine("Car stopped.");
        }

        public override string ToString()
        {
            return "This is a Car.";
        }
    }
    public class DriverClass
    {
        public static void Task()
        {
            Bicycle bike = new Bicycle();
            Car car = new Car();

            bike.Start();
            bike.Forward();
            bike.Turn(35);
            bike.Stop();
            Console.WriteLine(bike.ToString());

            Console.WriteLine();

            car.Start();
            car.Forward();
            car.Turn(77);
            car.Stop();
            Console.WriteLine(car.ToString());
        }
    }
}
