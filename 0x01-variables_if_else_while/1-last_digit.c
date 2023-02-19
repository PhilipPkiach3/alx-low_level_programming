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
    srand(time(0));
    int n = rand();
    int last_digit = n % 10;
    if (last_digit > 5)
    {
        printf("Last digit of %d is greater than 5\n", n);
    }
    else if (last_digit == 0)
    {
        printf("Last digit of %d is 0\n", n);
    }
    else
    {
        printf("Last digit of %d is less than 6 and not 0\n", n);
    }
    return 0;
}
