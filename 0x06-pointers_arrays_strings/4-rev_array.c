#include "main.h"

/**
 * reverse_array - reverse an int array
 * @a: pointer
 * @n: aray length
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		a[i] = tmp;
		a[n - i - 1] = a[i];
		a[i] = a[n - i - 1];
	}
}
