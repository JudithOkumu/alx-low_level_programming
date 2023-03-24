#include <stdio.h>
#include "math.h"

/**
 * main - prints the largest prime factor of the 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long y, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (y = 1 ; y <= square ; y++)
	{
	if (number % y == 0)
	{
		maxf = number / y;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}

