#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - Add a new node at  end of linked list
 * @head: a double pointer to list_t list
 * @str: string to put a new node
 *
 * Return: Address of the new element
 * NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new1;
	unsigned int len = 0;

	list_t *temp = *head;

	while (str[len])
		len++;

	new1 = malloc(sizeof(list_t));
	if (!new1)
		return (NULL);
	new1->str = strdup(str);
	new1->len = len;
	new1->next = NULL;
	if (*head == NULL)
	{
		*head = new1;
		return (new1);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new1;
	return (new1);
}
