#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 * @n: elements of array
 * @a: name of array
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
