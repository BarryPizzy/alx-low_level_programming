#include "main.h"
#include <string.h>

/**
 * *_strncat - funnction to concatenates two string
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
