#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to a node of linked list
 * @idx: index node is inserted
 * @n: value in new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new3;
	listint_t *temp = *head;

	new3 = malloc(sizeof(listint_t));
	if (!new3 || !head)
		return (NULL);

	new3->n = n;
	new3->next = NULL;

	if (idx == 0)
	{
		new3->next = *head;
		*head = new3;
		return (new3);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new3->next = temp->next;
			temp->next = new3;
			return (new3);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
