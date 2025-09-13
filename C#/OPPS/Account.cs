using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS
{
    class Account
    {
            // Private fields → Data Hiding
            private string name;
            private decimal balance;
            private string accountNumber;

            // Setter methods (with validation)
            public void SetName(string name)
            {
                this.name = name;
            }

            public void SetBalance(decimal balance)
            {
                if (balance >= 0) // validation
                    this.balance = balance;
                else
                    Console.WriteLine("Balance cannot be negative!");
            }

            public void SetAccountNumber(string accountNumber)
            {
                this.accountNumber = accountNumber;
            }

            // Getter methods
            public string GetName()
            {
                return this.name;
            }

            public decimal GetBalance()
            {
                return this.balance;
            }

            public string GetAccountNumber()
            {
                return this.accountNumber;
            }

            // Business logic methods
            public void Withdraw(decimal amount)
            {
                if (amount <= 0)
                {
                    Console.WriteLine("Invalid withdrawal amount.");
                }
                else if (balance >= amount)
                {
                    balance -= amount;
                    Console.WriteLine($"Withdrawal successful! Remaining balance: {balance}");
                }
                else
                {
                    Console.WriteLine("Insufficient balance.");
                }
            }

            public void Deposit(decimal amount)
            {
                if (amount > 0)
                {
                    balance += amount;
                    Console.WriteLine($"Deposit successful! New balance: {balance}");
                }
                else
                {
                    Console.WriteLine("Deposit amount must be positive.");
                }
            }

            public override string ToString()
            {
                return $"Account [Holder Name: {name}, Number: {accountNumber}, Balance: {balance}]";
            }
        }

        public class AccountApp
        {
            public static void Task()
            {
                Account account = new Account();

                account.SetName("Raju");
                account.SetAccountNumber("ABCD1234");
                account.SetBalance(10000);

                Console.WriteLine(account);
                Console.WriteLine("Current Balance: " + account.GetBalance());

                account.Deposit(2000);
                account.Withdraw(20000);
                account.Withdraw(5000);

                Console.WriteLine("Final Balance: " + account.GetBalance());
            }
        }
    }

