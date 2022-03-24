#include "main.h"
#include <string.h>
/**
 *_strncpy - function that copies a string
 *@dest: the destination of the copied string
 *@src: - the source of the string to copy
 *@n: - the number of bytes to be copied
 *
 *Return: returns the new value of @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
