#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints values based on the format string.
 * @format: A list of types of arguments to be printed.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *          Any other character should be ignored.
 * @...: Additional arguments based on the format.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int index = 0;

	va_start(args, format);

	while (format && format[index])
	{
		if (format[index] == 'c')
			printf("%c", (char)va_arg(args, int));
		else if (format[index] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[index] == 'f')
			printf("%f", (float)va_arg(args, double));
		else if (format[index] == 's')
		{
			char *s = va_arg(args, char *);

			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		index++;
	}

	va_end(args);
	printf("\n");
}
