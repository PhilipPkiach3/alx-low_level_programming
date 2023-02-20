#include <stdio.h>
/**
 * main - main black
 * Descrption: Write a program that prints all possible combinations of two two-digit numbers
 * Return 0
 */
int main(void)
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            putchar(i + '0');
            putchar(j + '0');
            putchar(' ');
            putchar(j + '0');
            putchar(i + '0');
            
	    if (i != 9 || j != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    puntchar('\n');
    return (0);
}
