#include "main.h"

/**
 * print_line - print a straight line interminal
 * @n: lenght of line
 * Return: void
 */

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
