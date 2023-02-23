#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 *
 * Return: A square
 */
void print_square(int size)
{
	int i;
	int p;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
