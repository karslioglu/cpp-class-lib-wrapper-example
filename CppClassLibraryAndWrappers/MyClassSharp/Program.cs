using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyClassSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello from MyClassNetCpp.exe");

            MyClassNet myClass = new MyClassNet();
            
            myClass.printMessage();
            Console.WriteLine("the answer to life, the universe, and everything is {0}", myClass.getValue());

            myClass.setMessage("Modified Message");
            String s = myClass.getMessage();
            Console.Write("Message From Library: ");
            myClass.printMessage();
            Console.WriteLine("Message From Application: {0}", s);

            myClass.setValue(24);
            int val = myClass.getValue();
            Console.WriteLine("Modified Value: {0}", val);

            Console.WriteLine("");
        }
    }
}
