#include <stdio.h>

/**
 * main - Print the value of all sizes
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)Sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)Sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)Sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)Sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (int) Sizeof(f));
	return (0);
}
