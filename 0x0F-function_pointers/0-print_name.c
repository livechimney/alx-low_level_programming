#include <stdio.h>
#include "function_pointers.h"
/**
 *function: print name
 *@name: name of person
 *
 * @f: variable to hold string name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);


	
}


