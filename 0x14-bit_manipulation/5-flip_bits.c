#include "main.h"

/**
 * clear_bit - set value of bit to 0 at a given index
 * @n: pointer of unsigned int
 * @index: index of the bit
 *
 * Return: 1 on sucees, -1 on failure
 */

int clear_bit(unsigned int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
