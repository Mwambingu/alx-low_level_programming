#include "main.h"
#include <string.h>
/**
 *_strspn - function that gets the length of a prefix substring
 *@s: initial segment
 *@accept: src variable
 *
 *Return: returns an unsigned int of the bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
