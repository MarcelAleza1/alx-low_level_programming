#include "lists.h"

/**
 * pop_listint - deletes the head of linked list
 * @head: head
 * Return: head data
 */

int pop_listint(listint_t **head)
{
	listint_t *current;

	int n;

	if (head == NULL)
		return (0);

	current = *head;
	if (current == NULL)
		return (0);

	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
