#include "main.h"
/**
 * more_numbers - print 10 times numbers from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	char i = 0;
	while (i <= 14)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
