#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	char alpha_u[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int count = 26;
	int i;

	for (i = 0; i < 26; i++)
	{
		alpha[count] = alpha_u[i];
		count += 1;
	}
	for (i = 0; i < 52; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);

}

