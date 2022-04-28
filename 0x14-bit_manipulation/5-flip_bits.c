#include "main.h"

/**
 * clear_bit - set value of bit to 0 at a given index
 * @n: pointer of unsigned int
 * @index: index of the bit
 *
 * Return: 1 on sucees, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;


	for (k = 0; n || index; n >>= 1, m >>= 1)
		if ((n & 1) != (m & 1))
			k++;


	return (k);
}
