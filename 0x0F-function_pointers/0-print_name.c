#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Calls the provided function to print a name.
 * @name: The name to be printed.
 * @f: A function pointer that prints the name.
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
