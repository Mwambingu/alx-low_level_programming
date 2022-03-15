#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
int _islower(int c)
{
	if (islower(c) && c == 'c')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
