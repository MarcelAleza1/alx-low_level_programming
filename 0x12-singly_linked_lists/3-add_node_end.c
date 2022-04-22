#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add a node to the end of linked list
 * @head: char to print
 * @str: string to new node
 *
 * Return: new node
 */

lidt_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node;
	int p;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	for (p = 0; str[p] != '\0'; p++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
