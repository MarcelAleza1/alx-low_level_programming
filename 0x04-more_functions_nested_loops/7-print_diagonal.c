#include "main.h"
/**
 * print_diagonal - prints the diagonal
 * @n: the number of \\ to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, k = 1;

	if (n > 0)
	{
		while (k < n)
			{
				for (i = 0; i < k; i++)
				{
					_putchar(' ');
				}

				_putchar('\\');

				_putchar('\n');

				k++;
			}
	}
	else
		_putchar('\n');
}
