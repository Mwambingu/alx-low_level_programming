#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar\n";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(word[i]);
	}
	return (0);
}
