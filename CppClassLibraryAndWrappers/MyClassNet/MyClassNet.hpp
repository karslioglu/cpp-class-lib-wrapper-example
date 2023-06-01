#pragma once
#ifndef __MYCLASSNET_H__
#define __MYCLASSNET_H__

#include "MyClass.hpp"

public ref class MyClassNet
{
public:
    MyClassNet();
	~MyClassNet();

	void setMessage(System::String^ msg);
	System::String^ getMessage();

	void printMessage();

	void setValue(int value);
	int getValue();

private:
	MyClass* m_myClass;
};
#endif //__MYCLASSNET_H__