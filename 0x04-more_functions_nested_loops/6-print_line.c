#include "main.h"

/**
 * print_line - draws a straight line according to parameter
 *
 * @n: The number of line to draw
 *
 * Return: empty
 */

void print_line(int n)
{
	int r;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (r = 0 ; r < n ; r++)
	{
		_putchar(95);
	}
	_putchar('\n');
	}
}
