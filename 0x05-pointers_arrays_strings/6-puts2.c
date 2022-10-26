#include "main.h"

/**
 * puts2 - print character of a string starting with first letter
 * @str: character string to be printed
 * Return: string
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}