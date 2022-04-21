#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of element in a linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nodes++;
	}
	return (nodes);
}
