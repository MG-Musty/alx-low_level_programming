#include "main.h"


/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0 always
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

	return (0);
}
