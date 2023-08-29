#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of listint_t list.
 * @h: a pointer to head node of linked list
 *
 * Return: The number of nodes in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
