#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of args
 * Return: return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int num;
	unsigned int i;
	va_list args;
	int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{

		num = va_arg(args, int);
		sum += num;
	}

	va_end(args);

	return (sum);
}
