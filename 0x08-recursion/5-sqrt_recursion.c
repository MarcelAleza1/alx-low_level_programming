#include "main.h"

/**
 * _sqrt_recursion - print the natural square root
 * @n: integer
 * Description: return -1 if n has no sqrt
 * Return: natural sqrt or -1
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - find the natural sqrt
 * @n:integer
 * @x: valubetween 1 and n
 * Return: sqrt
 */
int sqrt(int n, int x)
{
	if (x * x == n)
		return x;
	else if (x * x < n)
		return (sqrt(m, x + 1));
	else
		return (-1);
}
