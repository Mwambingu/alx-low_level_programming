#include "main.h"
#include <string.h>
/**
 * print_rev - Prints a string in reverse.
 * @str: The string to be printed.
 */
void print_rev(char *str)
{
	int c;
	int count;

	c = strlen(str);
	for (count = c - 1; count >= 0; count--)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
