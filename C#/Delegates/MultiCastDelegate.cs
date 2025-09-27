using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Delegates
{
    public delegate void TaskDelegate();
    public class MultiCastDelegate
    {
        public static void StartTask() => Console.WriteLine("Task Started");
        public static void EndTask() => Console.WriteLine("Task Ended");
    }

    public class MultiDelegateTask
    {
        public static void Run()
        {
            TaskDelegate task = MultiCastDelegate.StartTask;

            task += MultiCastDelegate.EndTask;
            Console.WriteLine(task);
        }
    }
}
