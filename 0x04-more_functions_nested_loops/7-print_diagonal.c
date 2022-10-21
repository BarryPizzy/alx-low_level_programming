#include "main.h"

/**
 * print_diagonal - print diagonal line on terminal
 *
 * @n: number of times of character
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	for (y = 1; y <= n; y++)
	{
		for (x = 1; x < y; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');

}
