#include "main.h"
/**
 * factorial - returns factorial of a number
 *
 * @n: number to find factorial of
 * Return: return the factorial value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
