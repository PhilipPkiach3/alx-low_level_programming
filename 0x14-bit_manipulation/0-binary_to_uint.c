#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - onvert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal numbers or 0 if there is an uconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, poit;
	int cat;

	if (b == NULL)
		return (0);

	for (cat = 0; b[cat]; cat++)
	{
		if (b[cat] != '0' && b[cat] != '1')
			return (0);
	}


	for (poit = 1, total = 0, cat--; cat >= 0; cat--, poit *= 2)
	{
		if (b[cat] == '1')
		total += poit;
	}

	return (total);
}
