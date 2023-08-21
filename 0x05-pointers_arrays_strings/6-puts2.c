#include "main.h"
/**
 * puts2 - function should print every other character of a string
 *
 * @str: input
 * Return: no return
 */
void puts2(char *str)
{
	int longin = 0;
	int t = 0;
	char *y = str;
	int j;

	while (*y != '\0')
	{
		y++;
		longin++;
	}
	t = longin - 1;
	for (j = 0; j <= t; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
