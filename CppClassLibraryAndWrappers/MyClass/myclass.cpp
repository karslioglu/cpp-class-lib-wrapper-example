/*
* Don't forget to add the MyClass library to the configuration.
*
* Export
*	properties->Configuration Properties->C/C++->Preprocessor->Preprocessor Definitions: MYCLASS_EXPORTS
*/

#include "myclass.hpp"

MyClass::MyClass()
{
	this->_msg = std::string("No message has been set yet!");
	this->_value = 42;

	std::cout << "Hello from MyClass.dll" << std::endl;
}

MyClass::~MyClass()
{
	std::cout << "Form MyClass.dll: Destroy" << std::endl;
}

void MyClass::setMessage(std::string msg)
{
	this->_msg = msg;
}

std::string MyClass::getMessage()
{
	return this->_msg;
}

void MyClass::printMessage()
{
	std::cout << this->_msg << std::endl;
}

void MyClass::setValue(int value)
{
	this->_value = value;
}

int MyClass::getValue()
{
	return this->_value;
}