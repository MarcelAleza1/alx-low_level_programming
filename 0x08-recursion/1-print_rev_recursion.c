#include "main.h"

/**
 * _print_rev_recursion - function to print inverse of a string
 * @s: pointer to the string
 * Return: void
 */
void _print_rev_recursion(char *s);
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s);
	}
}
