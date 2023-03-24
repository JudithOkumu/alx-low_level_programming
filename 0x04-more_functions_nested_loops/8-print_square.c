#include "main.h"

/**
 * print_square - prints n squares according to n number of times
 *
 * @size: the number of squares / number of times
 *
 * Return: empty
 */

void print_square(int size)
{
	int s, t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (s = 0 ; s < size ; s++)
	{
	for (t = 0 ; t < size ; t++)
	{
		_putchar(35);
	}
	_putchar('\n');
	}
	}
}
