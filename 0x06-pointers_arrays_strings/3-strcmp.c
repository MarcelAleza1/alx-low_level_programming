#include "main.h"

/**
 * _strcmp - function that compare 2 strings
 * @s1: pointer to the first string
 * @s2: Pointer to thhe second string
 * Return: the diffence of length
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, n;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	n = i - j;

	return (n);
}
