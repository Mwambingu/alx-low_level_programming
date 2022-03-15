#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int i;
	int count = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	for (i2 = 0; i2 <= 9; i2++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(letters[i]);
		}
		_putchar('\n');
	}
}
