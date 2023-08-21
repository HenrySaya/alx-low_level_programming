#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 * @a: pointer integer we want to set to b
 * @b: pointer integer we want to set to a
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
