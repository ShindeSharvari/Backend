using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Inheritance
{
    class Art
    {
        int i = 0;
        public Art() : base()
        {
            Console.WriteLine("hi i am Art Default Constructor");
        }
        public Art(int i)
        {
            this.i = i;
            Console.WriteLine("hi i am Para in Art");
        }
    }

    class Drawing : Art
    {
        public Drawing() { }
        public Drawing(int i) : base(i)
        {
            Console.WriteLine("hi i am Drawing Default Constructor");
        }
    }

    class Cartoon : Drawing
    {
        public Cartoon() : base()
        {
            Console.WriteLine("hi i am Cartoon Default");
        }
        public Cartoon(int i) : base(i)
        {

        }
    }
    public class ArtDemo
    {
        public static void Task()
        {
            Drawing ob = new Cartoon(11);

        }
    }

}
