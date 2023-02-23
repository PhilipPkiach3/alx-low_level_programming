#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of times theline should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int p;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (p = 0; p < i; p++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
