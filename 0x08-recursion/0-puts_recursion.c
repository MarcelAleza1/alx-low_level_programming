#include "main.h"

/**
 * _puts_recursion - function to print a string followed by new line.
 * @s: string pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
