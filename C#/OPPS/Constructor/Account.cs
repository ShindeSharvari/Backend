using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Constructor
{
    public class Account
    {
        private long accountNumber;
        private double balance;

        public Account() { }

        public Account(long accountNumber,double balance)
        {
            this.accountNumber = accountNumber;
            setBalance(balance);
        }

        public void setBalance(double balance)
        {
            if(balance < 0)
            {
                Console.WriteLine("Balance can't be zero");
            }
            else { this.balance = balance; }
        }

        public long getAccountNumber() { return accountNumber; }
        public double getBalance() { return balance; }

        public override string ToString()
        {
            return $"Account[Number : {this.accountNumber}, Balance : {this.balance}]";
        }

        public void credit(double amount)
        {
            if(amount < 0)
            {
                Console.WriteLine("Balance can't be negative");
            }
            else
            {
                this.balance += amount;
                Console.WriteLine($"Rs.{amount} credited to account");
            }     
        }
        public void debit(double amount)
        {
            if (amount < 0)
            {
                Console.WriteLine("Amount must be greater than zero");
            }
            else if(amount > this.balance)
            {
                Console.WriteLine("Insufficent balance");
            }
            else
            {
                this.balance -= amount;
                Console.WriteLine($"Rs.{amount} debited from account");
            }
        }
    }

    public class BankingApp
    {
        public static void Task()
        {
            Account a1 = new Account(12347655914567,5000);
            Console.WriteLine(a1);
            a1.credit(2000);
            Console.WriteLine(a1);
            a1.debit(4000);
            Console.WriteLine(a1);

            Console.WriteLine("-----------------------------------------------------");
            Account a2 = new Account(1359576884744,0);
            a2.setBalance(2000);
            Console.WriteLine(a2);
            a2.credit(500);
            Console.WriteLine($"Balance = {a2.getBalance()}");
            a2.debit(3000);
            Console.WriteLine(a2);

        }
    }
}
