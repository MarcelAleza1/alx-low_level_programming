#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: integeger
 * @av: array of argument
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int c, i, j, p;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = p = 0; p < c; j++, p++)
	{
		if (av[i][j] == '\0')
		{
			aout[p] = '\n';
			i++;
			p++;
			j = 0;
		}
		if (p < c - 1)
			aout[p] = av[i][j];
	}
	aout[p] = '\0';

	return (aout);
}
