#include "main.h"
#include <string.h>
/**
 *_memset - function that fills memory with a constant byte
 *@s: pointer var
 *@b: character var
 *@n: unsigned integer var
 *
 *Return: returns a char value
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
