#include <stdio.h>

/**
  * main - Prints a Fizz Buzz program
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int v;

	for (v = 1; v <= 100; v++)
	{
		if ((v % 3 == 0) && (v % 5 == 0))
			printf("FizzBuzz");
		else if (v % 3 == 0)
			printf("Fizz");
		else if (v % 5 == 0)
			printf("Buzz");
		else
			printf("%d", v);

		if (v != 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
