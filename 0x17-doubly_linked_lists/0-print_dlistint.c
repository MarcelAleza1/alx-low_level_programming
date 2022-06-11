#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print elements of doubly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_nodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		nbr_nodes++;
		h = h->next;
	}

	return (nbr_nodes);
}
