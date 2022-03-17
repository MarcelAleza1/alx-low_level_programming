#include "main.h"
/**
 * print_diagonal - prints the diagonal
 * @n: the number of time \n should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(' ');
		}
		_putchar('\n');
	}

	else
		_putchar('\n');
}
