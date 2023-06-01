/*
* Don't forget to add the MyClass library to the configuration.
*
* Header
*	properties->Configuration Properties->C/C++->General->Additional Include Directories: $(SolutionDir)\MyClass
*
* Lib
*	properties->Configuration Properties->Linker->General->Additional Library Directories: $(SolutionDir)\Debug
*																						   (x64: $(SolutionDir)\x64\Debug)
*	properties->Configuration Properties->Linker->Input->Additional Dependencies: MyClass.lib
*
*/

#include <iostream>
#include <myclass.hpp>

using namespace std;

int main()
{
	cout << "Hello from MyClassCpp.exe" << endl;

	MyClass* myClass = new MyClass();
	if (!myClass) {
		cerr << "Could not create an instance for the MyClass!" << endl;
		return 1;
	}

	myClass->printMessage();
	cout << "the answer to life, the universe, and everything is " << myClass->getValue() << endl;

	myClass->setMessage("Modified Message");
	std::string s(myClass->getMessage());
	cout << "Message From Library: ";
	myClass->printMessage();
	cout << "Message From Application: " << s << endl;

	myClass->setValue(24);
	int val = myClass->getValue();
	cout << "Modified Value: " << val << endl;

	cout << "\n";

	delete myClass;

	return 0;
}