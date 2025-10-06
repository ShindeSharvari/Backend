using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Abstraction
{
    public abstract class Vehicle
    {
        public void StartEngine()
        {
            Console.WriteLine("Engine Started");
        }

        public abstract void Drive();
    }
    public class Bike : Vehicle
    {
        public override void Drive()
        {
            Console.WriteLine("Bike is ready to drive");
        }
    }
    public class Car : Vehicle
    {
        public override void Drive()
        {
            Console.WriteLine("Car is ready to drive");
        }
    }
    public class VehicleSimulation
    {
        public static void Run()
        {
            Bike b1 = new Bike();
            b1.StartEngine();
            b1.Drive();

            Car c1 = new Car();
            c1.StartEngine();
            c1.Drive();
        }
    }
}
