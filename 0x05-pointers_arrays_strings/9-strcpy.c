#include "main.h"

/**
 * *_strcpy - a function to copy string by src
 * @dest: copy into
 * @src: copy from
 * Return: inputs of dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
