#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
/**
 * print_numer - like a hello worl
 * @n: params an integer
 * No return
 */
void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
