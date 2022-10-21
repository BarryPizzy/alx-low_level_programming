#include <stdio.h>

/**
 * main - Fizz-Buzz tes
 *
 * Description: program that prints the numbers from 1 to 100
 * multiples of 5 with Buzz, and multiples of both with FizzBuzz
 *
 * Return: 0
 */

int main(void)

{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
		printf("Buzz\n");
		return (0);
}
