#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find length of a string
 * @s: string
 * Return: integer
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ch;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	ch = malloc((size1 + size2) * sizeof(char) + 1);

	if (ch == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			ch[i] = s1[i];
		else
			ch[i] = s2[i - size1];
	}
	ch[i] = '\0';
	return (ch);
}
