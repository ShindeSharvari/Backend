using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Schema;

namespace Basic.String
{
    public class MakeLastLetterCapital
    {
        public static string MakeLastLetterCaptialOfString(string str)
        {
            //here splitted string on space bases so i get each word and stored in array words
            string[] words = str.Split(' ');
            //iterate each word
            for (int i= 0;i < words.Length;i++) 
             {
                //finded the length of each word
                int size = words[i].Length;

                //first it will make substring from start to size-1 and then add another substring which is size-1 and make that last uppercase
                words[i]= words[i].Substring(0, (size - 1)) + words[i].Substring(size-1).ToUpper();
             }
            // returning string using join method to convert string
            return string.Join(" ",words);
        }
        public static void Task()
        {
            string s1;
            Console.WriteLine("Enter the string");
            s1 =  Console.ReadLine();

            Console.WriteLine(MakeLastLetterCaptialOfString(s1));
        }
    }
}
