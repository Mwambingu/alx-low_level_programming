#include "main.h"
#include <string.h>
/**
 *_strpbrk - searches a string for any matching chars
 *           for a set of bytes
 *@s: string to check
 *@accept: string to match
 *
 *Return: returns the matching characters
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
