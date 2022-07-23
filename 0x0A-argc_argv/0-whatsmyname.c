#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * it will print the new name, without having to compile it again
 * @argc: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: this return to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
