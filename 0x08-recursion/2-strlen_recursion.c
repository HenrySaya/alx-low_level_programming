#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function that finds lenth of string
 *
 * @s: string to be measured
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}
