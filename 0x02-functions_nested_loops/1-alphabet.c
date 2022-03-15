#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	int i;
	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(letters[i]);
	}
	_putchar('\n');
}
