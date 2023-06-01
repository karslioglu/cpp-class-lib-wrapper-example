#pragma once
#ifndef __MYCLASS_H__
#define __MYCLASS_H__

#if defined(MYCLASS_EXPORTS)
#  define MYCLASSSHARED_EXPORT _declspec(dllexport)
#else
#  define MYCLASSSHARED_EXPORT _declspec(dllimport)
#endif

#include <iostream>

class MYCLASSSHARED_EXPORT MyClass {
public:
	MyClass();
	~MyClass();

	void setMessage(std::string msg);
	std::string getMessage();

	void printMessage();

	void setValue(int value);
	int getValue();

private:
	std::string _msg;
	int _value;
};
#endif //__MYCLASS_H__