#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i = 0;
	unsigned long int value;
	unsigned long int exclusive  = n ^ m;

	int bits = sizeof(n) * 8;

	for (i = bits - 1; i >= 0; i--)
	{
		value = exclusive >> i;
		if (value & 1)
			count++;
	}
	return (count);
}
