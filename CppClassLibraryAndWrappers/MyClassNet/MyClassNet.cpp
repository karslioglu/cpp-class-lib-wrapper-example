#include "MyClassNet.hpp"
#include <msclr\marshal_cppstd.h>

using namespace System;

MyClassNet::MyClassNet()
{
    Console::WriteLine("Hello from MyClassNet.dll");

    this->m_myClass = new MyClass();
}

MyClassNet::~MyClassNet()
{
    Console::WriteLine("Form MyClassNet.dll: Destroy");

    delete this->m_myClass;
}

void MyClassNet::setMessage(System::String^ msg)
{
    std::string unmanaged = msclr::interop::marshal_as<std::string>(msg);

    this->m_myClass->setMessage(unmanaged);
}

System::String^ MyClassNet::getMessage()
{
    std::string unmanaged = this->m_myClass->getMessage();
    System::String^ managed = gcnew System::String(unmanaged.c_str());
    
    return managed;
}

void MyClassNet::printMessage()
{
    std::string unmanaged = this->m_myClass->getMessage();
    System::String^ managed = gcnew System::String(unmanaged.c_str());

    Console::WriteLine(managed);
}

void MyClassNet::setValue(int value)
{
    this->m_myClass->setValue(value);
}

int MyClassNet::getValue()
{
    return this->m_myClass->getValue();
}