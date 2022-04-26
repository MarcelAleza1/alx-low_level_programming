#include "lists.h"
#include <string.h>
#include <stdio.h>


/**
 * add_nodeint_end - adds a node at the end of linked list
 * @head: character
 * @n: string
 *
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *n_node;

	current = *head;

	while (current && current->next != NULL)
		current = current->next;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->n = n;
	n_node->next = NULL;

	if (current)
		current->next = n_node;
	else
		*head = n_node;

	return (n_node);
}
