using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Interface.Factory
{
    public abstract class Vehicle
    {
        public abstract void Drive();
    }

    public class Car : Vehicle
    {
        public override void Drive()
        {
            Console.WriteLine("Let's go for a long drive by car");
        }
    }
    public class Bike : Vehicle
    {
        public override void Drive()
        {
            Console.WriteLine("Let's go for a long drive on bike");
        }
    }

    public abstract class VehicleFactory
    {
        public abstract Vehicle CreateVehicle();
    }
    public class CarFactory : VehicleFactory
    {
        public override Vehicle CreateVehicle()
        {
            return new Car();
        }
    }

    public class BikeFactory : VehicleFactory
    {
        public override Vehicle CreateVehicle()
        {
            return new Bike();
        }
    }

    public class VehicleApp
    {
        public static void Run()
        {
            // For car
            VehicleFactory carFactory = new CarFactory();
            Vehicle car = carFactory.CreateVehicle();
            car.Drive();

            //For bike
            VehicleFactory bikeFactory = new BikeFactory();
            Vehicle bike = bikeFactory.CreateVehicle();
            bike.Drive();

            // one - line calling 
            new BikeFactory().CreateVehicle().Drive();

        }
    }
}
