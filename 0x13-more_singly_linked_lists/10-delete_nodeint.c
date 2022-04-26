#include "lists.h"
#include <stdio.h>

/**
 * delete_node_at_index - deletes node at ith indes
 * @head: head
 * @index: index
 * Return: 1 if suceeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;

		free(current);
		return (1);
	}

	while (index != 1)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
		--index;
	}
	tmp = current->next;
	if (current->next->next)
		current->next = current->next->next;

	else
		free(tmp);

	return (1);
}
