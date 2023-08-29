#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head node of listint_t linked list
 *
 * Return: The data (n) of the deleted head node,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
	{
		return (0);
	}

	data = (*head)->n;
	temp = (*head)->next;
	free(head);
	*head = temp;

	return (data);
}
