using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Inheritance
{
    public class Point2D
    {
        public double X { get; set; }
        public double Y { get; set; }

        public Point2D()
        {
            X = 0.0;
            Y = 0.0;
        }

        public Point2D(double x, double y)
        {
            X = x;
            Y = y;
        }

        public void SetXY(double x, double y)
        {
            X = x;
            Y = y;
        }

        public double[] GetXY()
        {
            return new double[] { X, Y };
        }

        public override string ToString()
        {
            return $"Point2D[X: {X}, Y: {Y}]";
        }
    }

    public class Point3D:Point2D
    {
        public double Z {  get; set; }

        public Point3D():base()
        {
            Z = 0.0;
        }

        public Point3D(double x, double y, double z):base(x,y)
        {
            Z = z;
        }
        public void SetXYZ(double x, double y, double z)
        {
            X = x;
            Y = y;
            Z = z;
        }

        public double[] GetXYZ()
        {
            return new double[] { X, Y, Z };
        }

        public override string ToString()
        {
            return $"Point3D[ X: {X}, Y: {Y}, Z: {Z} ]";
        }

    }

    public class Dimensions
    {
        public static void Task()
        {
            Point2D p1 = new Point2D();
            p1.SetXY(3, 2);
            Console.WriteLine(p1);
            Console.WriteLine("---------------------------------------");
            Point2D p2 = new Point2D(2, 5);
            Console.WriteLine(string.Join(", ", p2.GetXY()));
            Console.WriteLine(p2);
            Console.WriteLine("---------------------------------------");
            Point3D p3 = new Point3D(2, 4, 7);
            Console.WriteLine(p3);

        }
    }
}
