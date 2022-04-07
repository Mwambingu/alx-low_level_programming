#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *@n: the first n bytes of s2
 *
 *Return: returns a string pointer on success
 *        returns a NULL char on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int scatx = 0, strl = 0;
	char *s_cat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		strl++;
	}
	for (i = 0; i < n; i++)
	{
		strl++;
	}
	s_cat = malloc(sizeof(char) * strl);
	if (s_cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		s_cat[scatx] = s1[i];
		scatx++;
	}
	for (i = 0; i < n; i++)
	{
		s_cat[scatx] = s2[i];
		scatx++;
	}
	return (s_cat);
}
