#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random numbers and check its last digits, compare it with
 * Return: 0
 */
int main(void)
{
	srand(time(NULL));
	int n = rand() % 100;
	int lastDigit = n % 10;
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and nott 0\n");
	}
	return (0)
}
