#include <stdio.h>
/**
 * _isupper - detect uppercase alphabets
 *
 * @c: input  character
 *
 * Return: (1) for true (0) false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'B')
		return (1);
	else
		return (0);
}
