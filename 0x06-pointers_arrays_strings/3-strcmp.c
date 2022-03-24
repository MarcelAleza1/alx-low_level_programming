#include "main.h"

/**
 * _strcmp - function that compare 2 strings
 * @s1: pointer to the first string
 * @s2: Pointer to thhe second string
 * Return: the diffence of length
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		i++;
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
	}
	return (0);
}
