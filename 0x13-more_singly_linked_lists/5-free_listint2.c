#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * Description: frees a linked list where header is set to NULL
 *
 * @head: head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
