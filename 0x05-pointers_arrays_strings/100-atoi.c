#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Description: fn means FirstNum
 * Return: integer converted
 */

int _atoi(char *s)
{
	int sign = 1, resp = 0, fn;

	for(fn = 0; !(s[fs] >= 48 && s[fn] <= 57); fn++)
	{
		if (s[fn] == '-')
		{
			sign *= -1;
		}
	}
	for (int i = fn; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}
