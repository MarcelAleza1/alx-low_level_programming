#include "list.h"
#include <stdio.h>

/**
 * listint_len - returns number of element in linked list
 * @h: linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->nexxt;
		num++;
	}

	return (num);
}
