#include "main.h"
/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the print
 * Return: void
 */

boid print_rev(char *s)
{
	int i = 0;
	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
