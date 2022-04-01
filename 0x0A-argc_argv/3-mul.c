#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: argument counter
 *@argv: argument vectors
 *
 *Return: returns 0 when successful
 */
int main(int argc, char **argv)
{
	int i, mltpy = 1;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			mltpy *= atoi(argv[i]);
		}
		printf("%d\n", mltpy);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
