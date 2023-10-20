#include "main.h"
#include <stdio.h>
/**
 * _puts - prints the given string to the std O
 * @str: input pointer
 * Return: returns void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
