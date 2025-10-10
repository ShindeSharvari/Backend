using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Interface.Factory
{
    public interface INotification
    {
       void Send(string message);
    }
    //EmailNotification SMSNotification PushNotification

    public class EmailNotification : INotification
    {
        public void Send(string message)
        {
            Console.WriteLine(message);
        }
    }
    public class SMSNotification : INotification
    {
        public void Send(string message)
        {
            Console.WriteLine(message);
        }
    }
    public class PushNotification : INotification
    {
        public void Send(string message)
        {
            Console.WriteLine(message);
        }
    }

    public class NotificationFactory
    {
        public static INotification CreateNotification(string channel)
        {
            switch(channel.ToLower())
            {
                case "email":
                    return new EmailNotification();
                case "sms":
                    return new SMSNotification();
                case "push":
                    return new PushNotification();
                default:
                    Console.WriteLine("Invalid notification channel");
                    return null;
            }
        }
    }
    public class Application
    {
        public static void Run()
        {
            INotification notification1 = NotificationFactory.CreateNotification("Email");
            notification1.Send("You got a new email related to job open and check");

            INotification notification2 = NotificationFactory.CreateNotification("SMS");
            notification2.Send("You got a new SMS from someone special open to check");

            INotification notification3 = NotificationFactory.CreateNotification("Push");
            notification3.Send("New Notification is pushed");
        }
    }
}
