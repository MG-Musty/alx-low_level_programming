#include <stdio.h>

/**
 * main - Print the value of all sizes
 * Return: 0 Always (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int) Sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) Sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) Sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) Sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int) Sizeof(float));
	return (0);
}
