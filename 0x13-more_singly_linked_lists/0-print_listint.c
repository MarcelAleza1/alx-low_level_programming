#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints element of linstint
 * @h: linked list 
 *
 * Return: number of nodes
 */

size_t print_listint(onst listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nodes++;
	}

	return (nodes);
}
