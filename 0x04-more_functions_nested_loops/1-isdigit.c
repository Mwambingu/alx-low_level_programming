#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: 1 if character is not a digit, 0 otherwise.
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
