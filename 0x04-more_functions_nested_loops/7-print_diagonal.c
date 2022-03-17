#include "main.h"
/**
 * print_diagonal - prints the diagonal
 * @n: the number of \\ to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, k = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
