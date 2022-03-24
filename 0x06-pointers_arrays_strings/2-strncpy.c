#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: pointer that holds the address of a character
 * @src: pointer that holds the address of src
 * @n: integer that indicate number of char to copy
 * Return: pointer dest
 */

char *_strncpy (char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j <= n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
