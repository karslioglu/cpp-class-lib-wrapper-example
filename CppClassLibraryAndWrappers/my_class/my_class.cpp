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
* Export
*	properties->Configuration Properties->C/C++->Preprocessor->Preprocessor Definitions: MY_CLASS_EXPORTS
*/

#include <stdlib.h>

#include <myclass.hpp>
#include "my_class.h"

struct myclass {
	void *obj;
};

myclass_t* myclass_create()
{
	myclass_t *m;
	MyClass* obj;

	printf("Hello from my_class.dll\n");

	obj = new MyClass();

	m = (myclass_t *)(malloc(sizeof(*m)));
	if (!m)
		return nullptr;
		
	m->obj = obj;

	return m;
}

void myclass_destroy(myclass_t* m)
{
	if (!m)
		return;

	printf("From my_class.dll: Destroy\n");

	delete static_cast<MyClass*>(m->obj);
	free(m);
}

void myclass_set_message(myclass_t* m, const char* msg)
{
	if (!m)
		return;

	static_cast<MyClass*>(m->obj)->setMessage(msg);
}

int myclass_get_message(myclass_t* m, char **msg)
{
	if (!m)
		return 1;

	std::string temp = static_cast<MyClass*>(m->obj)->getMessage();
	int len = temp.length();

	(*msg) = (char*)malloc(len + 1);
	if(!(*msg))
		return 2;

	std::memcpy((*msg), temp.c_str(), len);
	(*msg)[len] = '\0';

	return 0;
}

void myclass_print_message(myclass_t* m)
{
	if (!m)
		return;

	static_cast<MyClass*>(m->obj)->printMessage();
}

void myclass_set_value(myclass_t* m, int value)
{
	if (!m)
		return;

	static_cast<MyClass*>(m->obj)->setValue(value);
}

int myclass_get_value(myclass_t* m)
{
	if (!m)
		return -1;

	return static_cast<MyClass*>(m->obj)->getValue();
}