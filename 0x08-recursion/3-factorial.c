#include "main.h"

/**
 * factorial - function to calculate factorial of a number
 * @n: number
 * Desccription:return -1 if number -s lesser than 0
 * Factorial 0 is 1
 * Return: factiorial of n
 */
int factorial (int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		retun (n * factorial(n - 1));
}
