#include "main.h"
#include <stdio.h>

/**
 * main - prints a FizzBuzz program
 *
 * Return: 0
 */

int main(void)
{
	int j;

	printf("1");

	for (j = 2 ; j <= 100 ; j++)
	{
		printf(" ");
		if (j % 3 == 0)
			printf("Fizz");
		if (j % 5 == 0)
			printf("Buzz");
		if (j % 3 != 0 && j % 5 != 0)
			printf("%d", j);
	}
	printf("\n");
	return (0);
}
