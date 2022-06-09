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
	int nodes;

	nodes = 0;


	if (h == NULL)
		return (nodes);
	
	while (h-next != NULL)
		h = h->next;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
