#include "main.h"

/**
 * print_array - function to print an array
 * @a: pointer that points to the array location
 * @n: interger that store the length of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
