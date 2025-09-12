using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Constructor
{
    public class Circle
    {
        private double radius;
        private string color;

        public Circle()
        {
            radius = 1.0;
            color = "red";
        }
        public Circle(double radius)
        {
            this.radius = radius;
        }
        public Circle(double radius, string color)
        {
            this.radius = radius;
            this.color = color;
        }
        
        public void setRadius(double radius)
        {
            this.radius = radius;
        }
        public void setColor(string color)
        {
            this.color = color;
        }
        public double getRadius()
        {
            return this.radius;
        }

        public string getColor()
        {
            return this.color;
        }

        public double getArea()
        {
            return 3.14 *(this.radius * this.radius);
        }
    }

    public class CircleApp
    {
        public static void Task()
        {
            Circle c1 = new Circle(2.0, "blue");
            Console.WriteLine($"Radius : {c1.getRadius()}");
            Console.WriteLine($"Color : {c1.getColor()}");
            Console.WriteLine($"Area of Circle of radius {c1.getRadius()} = {c1.getArea()}");
            Console.WriteLine("------------------------------------------");

            Circle c2 = new Circle(2.0, "red");
            Console.WriteLine($"Radius : {c2.getRadius()}");
            Console.WriteLine($"Color : {c2.getColor()}");
            Console.WriteLine($"Area of Circle of radius {c2.getRadius()} = {c2.getArea()}");
            Console.WriteLine("------------------------------------------");

            Circle c3 = new Circle(1.0, "red");
            Console.WriteLine($"Radius : {c3.getRadius()}");
            Console.WriteLine($"Color : {c3.getColor()}");
            Console.WriteLine($"Area of Circle of radius {c3.getRadius()} = {c3.getArea()}");
        }
        
    }
}
