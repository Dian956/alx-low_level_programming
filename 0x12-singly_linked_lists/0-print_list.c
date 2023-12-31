#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of linked list
 * @h: pointer to list_t to print
 *
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
