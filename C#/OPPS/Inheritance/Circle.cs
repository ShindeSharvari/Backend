using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Inheritance
{
        class Circle
        {
            public double Radius { get; set; }
            public string Color { get; set; }

            public Circle()
            {
                Radius = 1.0;
                Color = "red";
            }

            public Circle(double radius, string color)
            {
                Radius = radius;
                Color = color;
            }

            public double GetArea()
            {
                return 3.14 * Radius * Radius;
            }

            public override string ToString()
            {
                return $"Circle [Radius = {Radius}, Color = {Color}]";
            }
        }

        class Cylinder : Circle
        {
            public double Height { get; set; }

            public Cylinder() : base()   
            {
                Height = 1.0;
            }

            public Cylinder(double radius, double height) : base(radius, "red")
            {
                Height = height;
            }

            public Cylinder(double radius, double height, string color) : base(radius, color)
            {
                Height = height;
            }

            public double GetVolume()
            {
                return base.GetArea() * Height; 
            }

            public override string ToString()
            {
                return $"Cylinder [Radius = {Radius}, Height = {Height}, Color = {Color}]";
            }
        }

        class Shapes
        {
            public static void Task() 
            {
                Circle c = new Circle(5, "Blue");
                Console.WriteLine(c);
                Console.WriteLine("Circle Area = " + c.GetArea());

                Cylinder cy = new Cylinder(5, 10, "Green");
                Console.WriteLine(cy);
                Console.WriteLine("Cylinder Volume = " + cy.GetVolume());

                Console.ReadLine();
            }
        }
}
