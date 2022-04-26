#include "lists.h"
#include <string.h>

/**
 * *add_nodeint - adds a node to a linked list head
 * @head: head of linked list
 * @n: integer
 * Return: number of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = (listint_t *) malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}


	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
