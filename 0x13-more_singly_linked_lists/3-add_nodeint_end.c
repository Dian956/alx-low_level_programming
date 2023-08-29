#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to a node of listint_t list
 * @n: integer value of new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new2;
	listint_t *temp = *head;

	new2 = malloc(sizeof(listint_t));
	if (new2 == NULL)
	{
		return (NULL);
	}
	new2->n = n;
	new2->next = NULL;
	if (*head == NULL)
	{
		*head = new2;
		return (new2);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new2;

	return (new2);
}
