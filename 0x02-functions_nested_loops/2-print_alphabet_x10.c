#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int i;
	int count;
	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	for (count = 0; count <= 9; count++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(letters[i]);
		}
		_putchar('\n');
	}
}
