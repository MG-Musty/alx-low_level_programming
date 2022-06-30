#include <stdio.h>

/**
 * main - Print the value of all sizes
 * Return: 0 Always (Success)
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", Sizeof(char));
printf("Size of an int: %d byte(s\n", Sizeof(int));
printf("Size of a long int: %d byte(s)\n", Sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", Sizeof(long long int));
printf("Size of float: %d byte(s)\n", Sizeof(float));
return (0);
}
