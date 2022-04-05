#include <string.h>
#include "main.h"
/**
 *_strdup - returns a pinter to a new string which is
 *          a duplicate of the string @str
 *@str: the string to duplicate
 *
 *Return: on success returns a pointer to the duplicated
 *        string
 *        returns (NULL) if memory is insufficient
 */
char *_strdup(char *str)
{
	char *str2;

	str2 = strdup(str);
	if (str2 == NULL)
	{
		return (NULL);
	}
	return (str2);
}
