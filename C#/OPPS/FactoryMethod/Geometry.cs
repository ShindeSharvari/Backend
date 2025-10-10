using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Interface.Factory
{
    public interface IShape
    {
        void Draw();
    }
    public class Circle : IShape
    {
        public void Draw()
        {
            Console.WriteLine("From Circle");
        }
    }
    public class Rectangle : IShape
    {
        public void Draw()
        {
            Console.WriteLine("From Rectangle");
        }
    }
    public class Triangle : IShape
    {
        public void Draw()
        {
            Console.WriteLine("From Triangle");
        }
    }
    public static class ShapeFactory
    {
        public static IShape CreateShape(string shapeType)
        {
            switch (shapeType.ToLower())
            {
                case "circle":
                    return new Circle();
                case "rectangle":
                    return new Rectangle();
                case "triangle":
                    return new Triangle();
                default:
                    Console.WriteLine("Invalid shape!");
                    return null;
            }
        }
    }


        public class Geometry
        {
          public static void Task()
          {
            IShape shape = ShapeFactory.CreateShape("Triangle");
            shape.Draw();

            IShape shape2 = ShapeFactory.CreateShape("Hexagon");
            shape2.Draw();
          }
        }
}
