#include "main.h"

/**
 * *_memset -function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: the momey address (memeory area)
 * @b: constant byte b
 * @n: first n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
