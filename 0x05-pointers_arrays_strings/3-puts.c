#include "main.h"
#include <string.h>
/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	int c;
	int count;

	c = strlen(str);
	for (count = 0; count < c; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
