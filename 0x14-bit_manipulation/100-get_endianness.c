#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *c = (char *) &value;

	return (*c);
}
