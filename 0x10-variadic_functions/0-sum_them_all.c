#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all arguments
 * @n: nummber of params
 *
 * Return: sum of args
 * 0 on error
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);
	if (n != 0)
		for (i = 0; i < n; i++)
			sum += va_arg(list, unsigned int);

	va_end(list);

	return (sum);
}
