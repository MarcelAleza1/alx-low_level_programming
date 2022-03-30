#include "main.h"

/**
 * _strlen_recursion - function to print length of string
 * @s: pointer to the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
