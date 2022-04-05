#include "main.h"
#include <stdlib.h>
/**
 *str_concat - a function takes two strings and returns
 *             a concatenated string
 *@s1: The first string
 *@s2: The second string
 *
 *Return: returns a string when successful
 *        returns null when unsuccessful
 */
char *str_concat(char *s1, char *s2)
{
	int i, i2 = 0, strl = 0;
	char *str_cat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 == "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		strl++;
	}

	str_cat = malloc(sizeof(char) * strl);
	if (str_cat == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		str_cat[i2] = s1[i];
		i2++;
	}
	for (i = 0; s2[i]; i++)
	{
		str_cat[i2] = s2[i];
		i2++;
	}
	return (str_cat);
}
