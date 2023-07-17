#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 * Discription - Prints all single digit numbers of base 10 starting from 0
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	putchar("\n");
	return (0);
}
