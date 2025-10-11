using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.Exceptions
{
    public class NegativeAmountException : Exception
    {
        public NegativeAmountException(string message) : base(message) 
        {
        }
    }
    public class BankAccount
    {
        public int Balance { get; set; } = 1000;

        public void Withdraw(int amount)
        {
            try
            {
                if(amount > Balance)
                {
                    throw new InvalidOperationException("InSufficient Balance");
                }
                if(amount < 0)
                {
                    throw new NegativeAmountException("Amount can't be negative");
                }
                Balance -= amount;
                Console.WriteLine($"✅ Withdrawal successful! Remaining balance: ₹{Balance}");
            }
            catch(InvalidOperationException ex)
            {
                Console.WriteLine(ex.Message);
            }
        }
    }
    public class BankApplication
    {
        public static void Run()
        {
            BankAccount moneyWithdraw = new BankAccount();
            try
            {
                Console.WriteLine("Enter the amount to withdraw:");
                int amount = int.Parse(Console.ReadLine());
                moneyWithdraw.Withdraw(amount);
            }
            catch (FormatException)
            {
                Console.WriteLine("Please enter a valid number.");
            }
            finally
            {
                Console.WriteLine("Thanks for banking");
            }
        }
    }
}
