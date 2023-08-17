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
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
