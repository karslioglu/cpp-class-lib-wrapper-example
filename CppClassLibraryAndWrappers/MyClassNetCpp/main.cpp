#using <mscorlib.dll>

using namespace System;

int main(array<System::String^>^ args)
{
    Console::WriteLine("Hello from MyClassNetCpp.exe");
    
    MyClassNet^ myClass = gcnew MyClassNet();
    if (!myClass) {
        Console::WriteLine("Could not create an instance for the MyClassNet!");
        return 1;
    }

    myClass->printMessage();
    Console::WriteLine("the answer to life, the universe, and everything is {0}", myClass->getValue());

    myClass->setMessage("Modified Message");
    System::String^ s(myClass->getMessage());
    Console::Write("Message From Library: ");
    myClass->printMessage();
    Console::WriteLine("Message From Application: {0}", s);

    myClass->setValue(24);
    int val = myClass->getValue();
    Console::WriteLine("Modified Value: {0}", val);

    Console::WriteLine("");

    delete myClass;
    
    return 0;
}