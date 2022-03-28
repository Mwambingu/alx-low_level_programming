#include "main.h"
#include <string.h>
/**
 *_memcpy -  a function that copies memory area.
 *@dest: copy destination variable.
 *@src: source variable.
 *@n: number of copy times.
 *
 *Return: returns @dest var.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
