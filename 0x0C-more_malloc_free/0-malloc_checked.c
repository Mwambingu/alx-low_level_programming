#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - function that allocates memory using malloc
 *@b: an unsigned int var that takes amount of memory to be
 *    allocated
 *Return: returns a pointer to the allocated memory
 *        on failure causes an normal process termination with
 *        a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *mall = malloc(b);

	if (mall == NULL)
	{
		exit(98);
	}
	return (mall);
}
