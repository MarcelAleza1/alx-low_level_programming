#include "main.h"

/**
 * *_memeset -function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: the momey address (memeory area)
 * @b: constant byte b
 * @n: first n bytes
 */
char *_memeset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
