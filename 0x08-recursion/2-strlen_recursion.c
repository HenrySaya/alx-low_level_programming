#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: character to be checked
 * Return: return the length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
