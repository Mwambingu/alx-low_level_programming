#include <stdio.h>
/**
 *main - Entry point
 *@argc: argument counter
 *@argv: argument vectors
 *
 *Return: returns 0 when successful
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
