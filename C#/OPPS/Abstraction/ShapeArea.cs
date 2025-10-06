using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Abstraction
{
    public abstract class Shapes
    {

        public abstract double CalculateArea(); 
    }

    public class Rectangle : Shapes
    {
        private double length;
        private double width;
        public Rectangle() { }
        public Rectangle(double length, double width)
        {
            this.length = length;
            this.width = width;
        }

        public override double CalculateArea()
        {
            return length * width;
        }
    }
    public class Circle : Shapes
    {
        private double radius;

        public Circle() { }
        public Circle(double radius)
        {
            this.radius = radius;
        }

        public override double CalculateArea()
        {
            return Math.PI * radius * radius;
        }
    }
    public class ShapeArea
    {
        public static void Task()
        {
            Circle circle = new Circle(5.0);
            Rectangle rectangle = new Rectangle(4.0, 6.0);

            Console.WriteLine("Area of Circle: " + circle.CalculateArea());
            Console.WriteLine("Area of Rectangle: " + rectangle.CalculateArea());
        }
    }
}
