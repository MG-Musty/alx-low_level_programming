#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  assign a random number to the variable n
 *
 * Description: print last digit in random number
 *
 * Return: always 0 success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is", n);
	if (n > 5)
	{
		printf("greater than 5\n");
	}
	if (n == 0)
	{
		printf("0\n");
	}
	if (n < 6 && n != 0)
	{
		printf("less than 6 not 0\n");
	}
		printf("0\n");
	return (0);
}
