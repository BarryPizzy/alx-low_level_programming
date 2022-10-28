#include "main.h"

/**
 * reverse_array - a function to reverse the content of an array of integers
 * @a: array a
 * @n: element of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
