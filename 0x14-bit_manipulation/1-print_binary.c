#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	int bits = sizeof(n) * 8;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (i = bits - 1; i >= 0; i--)
	{
		int bit = (n >> i) & 1;

		if (bit)
		{
			putchar('1');
			count++;
		}
		else if (count > 0)
		{
			putchar('0');
		}
	}
}
