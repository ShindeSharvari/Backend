using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Basic.OPPS.Constructor
{
    public class InvoiceItem
    {
            private string id;
            private string desc;
            private int qty;
            private double unitPrice;

            public InvoiceItem() { }
            public InvoiceItem(string id, string desc, int qty, double unitPrice)
            {
                this.id = id;
                this.desc = desc;
                this.qty = qty;
                this.unitPrice = unitPrice;
            }

            public string getID() { return id; }
            public string getDesc() { return desc; }
            public int getQty() { return qty; }
            public double getUnitPrice() { return unitPrice; }

            public void setQty(int qty) { this.qty = qty; }
            public void setUnitPrice(double unitPrice) { this.unitPrice = unitPrice; }

            public double getTotal()
            {
                return unitPrice * qty;
            }
            public override string ToString()
            {
                return $"InvoiceItem[ID: {id}, Desc: {desc}, Qty: {qty}, UnitPrice: {unitPrice}, Total: {getTotal()}]";
            }
        }

        public class InvoiceApp
        {
            public static void Task()
            {
                InvoiceItem item1 = new InvoiceItem("I001", "Laptop", 2, 35000);
                Console.WriteLine(item1);

                // Update quantity or price
                item1.setQty(3);
                item1.setUnitPrice(36000);

                Console.WriteLine($"After update: {item1}");
                Console.WriteLine($"Total Price: {item1.getTotal()}");
            }
        }
}