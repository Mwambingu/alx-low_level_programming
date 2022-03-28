#include "main.h"
#include <string.h>
/**
 *_strchr - locates a character in a string
 *@s: stores the located charcter
 *@c: the string that is to be searched
 *
 *Return: returns @s or null
 */
char *_strchr(char *s, char c)
{
	s = strchr(s, c);
	return (s);
}
