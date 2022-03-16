#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return: digit between 0 and 9
 */

int print_last_digit(int n)
{
	int newdigit;

	if (n < 0)
		newdigit = -1 * (n % 10);
	else
		newdigit = n % 10;

	_putchar(newdigit + '0');
	return (newdigit);
}
