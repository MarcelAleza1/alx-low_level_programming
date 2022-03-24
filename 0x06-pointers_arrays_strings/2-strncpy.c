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
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
