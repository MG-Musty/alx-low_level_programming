#include <stdio.h>

/**
 * main - Print the value of all sizes
 * Return: 0 Always (Success)
 */
int main(void)
{
	char 1;
	int 4;
	long int 4;
	long long int 8;
	float 4;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
