#include "main.h"

/**
 * print_line - Print a line
 * @n: Number of line to draw
 *
 * Return - A line, empty or skip
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
