#include "main.h"


/**
 * main - prints the alphabet, in lowercase, followed by a new line
 */
void main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
