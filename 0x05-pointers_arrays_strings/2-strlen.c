#include "main.h"

/**
 * _strlen - lenght of string as output
 * @s: lwnght of string - char c
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
	pl = s[i++];
	}
	return (sum);
}
