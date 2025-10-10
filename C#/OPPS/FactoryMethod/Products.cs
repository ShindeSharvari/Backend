using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Interface.Factory
{
    public interface IDocument
    {
        void Print();
    }

    public class WordDocument : IDocument
    {
        public void Print()
        {
            Console.WriteLine("Printed from word document");
        }
    }
    public class PdfDocument : IDocument
    {
        public void Print()
        {
            Console.WriteLine("Printed from PDF document");
        }
    }
    public class DocumentFactory
    {
        public static IDocument Create(string type)
        {
            string input = type.ToLower();

            if (input == "word")
            {
                return new WordDocument();
            }
            else if (input == "pdf")
            {
                return new PdfDocument();
            }
            else
            {
                Console.WriteLine("Invalid Document");
                return null;
            }
        }
    }
    public class Products
    {
        public static void Task()
        {
            IDocument d1 = DocumentFactory.Create("word");
            d1.Print();
        }
    }
}
