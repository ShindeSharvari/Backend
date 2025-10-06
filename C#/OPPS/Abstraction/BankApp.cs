using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Abstraction
{
    public abstract class BankAccount
    {
        public double Balance { get; set; }

        public abstract void Deposit(double amount);
        public abstract void Withdraw(double amount);
    }

    public class SavingsAccount : BankAccount
    {
        public override void Deposit(double amount)
        {
            Balance += amount;
            Console.WriteLine($"Deposited {amount}, at saving account Balance: {Balance}");
        }

        public override void Withdraw(double amount)
        {
            if (amount <= Balance)
            {
                Balance -= amount;
                Console.WriteLine($"Withdrawn {amount} from saving account, Balance: {Balance}");
            }
            else
            {
                Console.WriteLine("Insufficient balance at saving account!");
            }
        }
    }

    public class CurrentAccount : BankAccount
    {
        public override void Deposit(double amount)
        {
            Balance += amount;
            Console.WriteLine($"Deposited {amount} at current account, Balance: {Balance}");
        }

        public override void Withdraw(double amount)
        {
            if (amount <= Balance)
            {
                Balance -= amount;
                Console.WriteLine($"Withdrawn {amount} from current account Balance: {Balance}");
            }
            else
            {
                Console.WriteLine("Insufficient balance in current account");
            }
        }
    }
    public class BankApp
    {
        public static void Task()
        {
            BankAccount savings = new SavingsAccount();
            BankAccount current = new CurrentAccount();

            savings.Deposit(1000);
            savings.Withdraw(500);

            current.Deposit(3000);
            current.Withdraw(1060);
        }
    }
}
