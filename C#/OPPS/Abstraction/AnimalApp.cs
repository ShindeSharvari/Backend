using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Abstraction
{

    public abstract class Animal
    {
        public abstract void MakeSound();
    }
    public class Dog : Animal
    {
        public override void MakeSound()
        {
            Console.WriteLine("Dog barks");
        }
    }
    public class Cat : Animal
    {
        public override void MakeSound()
        {
            Console.WriteLine("Cat Meows");
        }
    }
    public class AnimalApp
    {
        public static void Task()
        {
            Dog d1 = new Dog();
            d1.MakeSound();

            Cat c1 = new Cat();
            c1.MakeSound();
        }
    }
}
