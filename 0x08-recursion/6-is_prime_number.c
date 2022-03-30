#include "main.h"

/**
 * is_prime_number - function to return 1 if prime or 0 else
 * @n: number
 * Return: 0 0r 1
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n < 0)
		return (0);
	return check_if_prime(n, 2);
}

/**
 * check_prime- check if a number is divisible
 * @n: the number
 * @i: iterator
 * Return: 1 if prime and o if not prime
 */

int check_if_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return check_if_prime(n, i + 1);
}
