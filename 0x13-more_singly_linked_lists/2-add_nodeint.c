#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to first node of list
 * @n: integer value of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new1;

	new1 = malloc(sizeof(listint_t));
	if (new1 == NULL)
	{
		return (NULL);
	}
	new1->n = n;
	new1->next = *head;
	*head = new1;

	return (new1);
}
