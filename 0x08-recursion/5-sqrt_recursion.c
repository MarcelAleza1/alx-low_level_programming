#include "main.h"

/**
 * _sqrt_recursion - print the natural square root
 * @n: integer
 * Description: return -1 if n has no sqrt
 * Return: natural sqrt or -1
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find the natural sqrt
 * @n:integer
 * @x: valubetween 1 and n
 * Return: sqrt
 */
int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (square(n, x + 1));
	else
		return (-1);
}
