using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Interface
{
    public abstract class Animal
    {
       protected int legs;
       protected Animal(int legs)
       {
         this.legs = legs;
       }
       public virtual void Walk()
       {
         Console.WriteLine($"This animal walks on {legs} legs.");
       }
        public abstract void Eat();
    }
    public interface IPet
    { 
        string GetName();
        void SetName(string name);
        void Play();
    }
    public class Spider : Animal
    {
        public Spider() : base(8) { }

        public override void Eat()
        {
            Console.WriteLine("The spider eat insects.");
        }
    }
    public class Cat : Animal, IPet
    {
        private string name;

        public Cat(string name) : base(4)
        {
            this.name = name;
        }

        public Cat() : this("") { }

        public string GetName()
        {
            return name;
        }

        public void SetName(string name)
        {
            this.name = name;
        }

        public void Play()
        {
            Console.WriteLine($"{name} likes to play with a ball.");
        }

        public override void Eat()
        {
            Console.WriteLine("The cat eats fish.");
        }
    }
    public class Fish : Animal, IPet
    {
        private string name;

        public Fish() : base(0) { }

        public string GetName()
        {
            return name;
        }

        public void SetName(string name)
        {
            this.name = name;
        }

        public void Play()
        {
            Console.WriteLine($"{name} swims around happily.");
        }

        public override void Eat()
        {
            Console.WriteLine("The fish eats plants.");
        }

        public override void Walk()
        {
            Console.WriteLine("Fish can’t walk; they swim instead.");
        }
    }


    public class Zoo
    {
        public static void Task()
        {
            Fish f = new Fish();
            f.SetName("Memo");
            f.Play();
            f.Walk();
            f.Eat();

            Cat c = new Cat("Crystal");
            c.Play();
            c.Eat();

            Spider s = new Spider();
            s.Walk();
            s.Eat();

            Animal a = new Fish();
            a.Walk();
            a.Eat();
        }
    }
}
