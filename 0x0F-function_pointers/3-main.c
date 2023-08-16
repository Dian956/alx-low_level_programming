#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - Entry point.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0
 * 98 on wrong number of arguments
 * 99 on invalid operator
 * 100 on division by zero error
 */
int main(int argc, char *argv[])
{
	int num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')

		if (strlen(op) != 1)
		{
			printf("Error\n");
			 exit(99);
		}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	exit(0);

}
