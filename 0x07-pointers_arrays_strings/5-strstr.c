#include "main.h"
#include <string.h>
/**
 *_strstr - finds the first occurence of the substring
 *          needle in the string haystack.
 *@haystack: this is the main c string to be scanned
 *@needle: this is the small string to be searched
 *         with-in haystack string.
 *
 *Return: returns the matching characters
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
