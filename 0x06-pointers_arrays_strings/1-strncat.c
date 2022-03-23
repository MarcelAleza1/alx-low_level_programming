#include "main.h"

/**
 * *_strncat - function that concateneates two strings
 * @dest: Pointer to the first string
 * @src: Pointer to the second string
 * @n:at most number of bite of src to use
 * Return: Pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
