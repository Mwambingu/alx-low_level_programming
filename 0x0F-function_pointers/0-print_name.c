#include "function_pointers.h"
/**
 *print_name - function that prints a name
 *@f: a function pointer
 *@name: string to be printed as name
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
