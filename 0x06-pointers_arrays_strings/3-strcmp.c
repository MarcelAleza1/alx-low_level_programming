#include "main.h"

/**
 * _strcmp - function that compare 2 strings
 * @s1: pointer to the first string
 * @s2: Pointer to thhe second string
 * Return: the diffence of length
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1 != '\0')
		i++;
	while (s2 != '\0')
		j++;

	int n = i - j;

	return (n);
}
