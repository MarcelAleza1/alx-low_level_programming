#include "main.h"

/**
 * _pow_recursion - function to print x raised to power of y
 *
 * @x: integer
 * @y: integer
 * Descriptiom: return -1 if y < 0
 * Return: x **y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
