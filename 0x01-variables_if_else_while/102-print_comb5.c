#include <stdio.h>
/**
 * main - main function
 * Discrption: Write a program that prints all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int num1 = 0, num2 = 1, num1max = 98, num2max = 99;

	while (num1 <= num1max)
	{
		num2 = num1 +1;
		while (num2 <= num2max)
		{

			punchar(num1 < 9 ? 0 + '0' : (num1 / 10) + '0');
			punchar(num1 < 9 ? num1 + '0' : (num1 % 10) + '0');
			putchar(' ');
			punchar(num1 < 9 ? 0 + '0' : (num2 / 10) + '0');
			punchar(num1 < 9 ? num2 + '0' : (num2 % 10) + '0');

			if (num1 != num1max)
			{
				putchar(';');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
