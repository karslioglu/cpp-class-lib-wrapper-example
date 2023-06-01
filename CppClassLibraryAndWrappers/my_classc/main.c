/*
* Don't forget to add the MyClass library to the configuration.
*
* Header
*	properties->Configuration Properties->C/C++->General->Additional Include Directories: $(SolutionDir)\MyClass
*
* Lib
*	properties->Configuration Properties->Linker->General->Additional Library Directories: $(SolutionDir)\Debug
																						   (x64: $(SolutionDir)\x64\Debug)
*	properties->Configuration Properties->Linker->Input->Additional Dependencies: MyClass.lib
*/

#include <stdlib.h>
#include <stdio.h>

#include "my_class.h"

int main()
{
	printf("Hello from my_classc.exe\n");

	myclass_t* myclass = myclass_create();

	myclass_print_message(myclass);
	printf("the answer to life, the universe, and everything is %d\n", myclass_get_value(myclass));

	myclass_set_message(myclass, "Modified Message");
	printf("Message From Library: ");
	myclass_print_message(myclass);
	char* msg;
	if (!myclass_get_message(myclass, &msg)) {
		printf("Message From Application: %s\n", msg);
	} else {
		printf("myclass_get_message()=>error\n");
	}
	
	myclass_set_value(myclass, 24);
	int val = myclass_get_value(myclass);
	printf("Modified Value: %d", val);

	printf("\n");

	myclass_destroy(myclass);

	return 0;
}