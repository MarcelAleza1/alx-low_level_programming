#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: pointer to an unsigned long int
 * @index: index of bit
 * Return: 1 if success, -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;

	if (*n & k)
		*n ^= k;

	return (1);
}
