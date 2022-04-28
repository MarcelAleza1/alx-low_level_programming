#include <unistd.h>

/**
 * _putchar - writed the character c to stdout
 * @c: The character
 *
 * Return: 1 on success,-1 on error and error no is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
