#ifndef __MYCLASS_H__
#define __MYCLASS_H__

#if defined(MY_CLASS_EXPORTS)
#  define MY_CLASSSHARED_EXPORT _declspec(dllexport)
#else
#  define MY_CLASSSHARED_EXPORT _declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif
	MY_CLASSSHARED_EXPORT struct myclass;
	MY_CLASSSHARED_EXPORT typedef struct myclass myclass_t;

	MY_CLASSSHARED_EXPORT myclass_t* myclass_create();
	MY_CLASSSHARED_EXPORT void myclass_destroy(myclass_t *obj);

	MY_CLASSSHARED_EXPORT void myclass_set_message(myclass_t *obj, const char *msg);
	MY_CLASSSHARED_EXPORT int myclass_get_message(myclass_t* obj, char **msg);

	MY_CLASSSHARED_EXPORT void myclass_print_message(myclass_t* obj);

	MY_CLASSSHARED_EXPORT void myclass_set_value(myclass_t *obj, int value);
	MY_CLASSSHARED_EXPORT int myclass_get_value(myclass_t *obj);
#ifdef __cplusplus
}
#endif

#endif //__MYCLASS_H__
