#include "main.h"

/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  *
  * Return: 10 times of the numbers since 0 up to 14
  */
void more_numbers(void)
{
	int a, p;

	for (a = 0; a < 10; a++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p > 9)
			{
				_putchar((p / 10) + '0');
			}

			_putchar((p % 10) + '0');
		}

		_putchar('\n');
	}
}
