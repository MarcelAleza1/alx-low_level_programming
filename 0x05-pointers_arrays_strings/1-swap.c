#include "main.h"
/**
 * swap_int - function to swap values of two integers
 * @a: pointer 
 * @b: pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *temp;

	*temp = *a;
	*a = *b;
	*b = *temp;
}
