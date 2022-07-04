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

	printf("Size of a char: %zu byte(s)", sizeof(char));
	printf("Size of an int: %zu byte(s", sizeof(int));
	printf("Size of a long int: %zu byte(s)", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)", sizeof(long long int));
	printf("Size of a float: %zu byte(s)", sizeof(float));
	return (0);
}
