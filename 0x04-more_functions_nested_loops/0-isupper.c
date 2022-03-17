#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _isupper(int c)
{
        if (isupper(c))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}

