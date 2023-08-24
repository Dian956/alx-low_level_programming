#include "lists.h"
#include <stdlib.h>

/**
 * list_len -Return number of elements in linked list
 * @h: a pointer to the list_t list
 *
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
