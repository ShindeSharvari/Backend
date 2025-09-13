using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Constructor
{
    public class Rectangle
    {
        private float length;
        private float width;

        public Rectangle()
        {
            this.length = 1.0f;
            this.width = 1.0f;
        }

        public Rectangle(float length, float width)
        {
            this.length = length;   
            this.width = width;
        }

        public void setLength(float length)
        {
            this.length = length;
        }
        public void setWidth(float width)
        {
            this.width=width;
        }
        public float getLength()
        {
            return this.length;
        }
        public float getWidth()
        {
            return this.width;
        }

        public double getArea()
        {
            return this.length * this.width;
        }

        public double getPerimeter()
        {
            return 2 * (this.length + this.width);
        }

        public override string ToString()
        {
            return $"Rectangle[Length = {this.length}, Width = {this.width}]";
        }
    }

    public class RectangleApp
    {
        public static void Task()
        {
            Rectangle r1 = new Rectangle(13.5f,7.8f);
            Console.WriteLine($"Area of rectangle with length {r1.getLength()} and width {r1.getWidth()} = {r1.getArea()}");
            Console.WriteLine($"Perimeter of rectangle with length {r1.getLength()} and width {r1.getWidth()} = {r1.getPerimeter()}");
            Console.WriteLine("---------------------------------------------");

            Rectangle r2 = new Rectangle();
            r2.setLength(7.6f);
            r2.setWidth(3.7f);
            Console.WriteLine($"Area of rectangle with length {r2.getLength()} and width {r2.getWidth()} = {r2.getArea()}");
            Console.WriteLine($"Perimeter of rectangle with length {r2.getLength()} and width {r2.getWidth()}= {r2.getPerimeter()}");

        }
    }
}
