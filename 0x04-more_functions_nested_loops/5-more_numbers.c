#include "main.h"
/**
 * more_numbers - print 10 times numbers from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0;

	char n, c;

	while (i < 10)
	{
		for (n = 0; n<= 14; n++)
		{
			c = n;
			if ( > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
		i++;
	}
}
