#include "main.h"

/**
 * swap_int - two integers to swap values
 * @a: first input
 * @b: second input
 * Return: integers
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
