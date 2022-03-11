#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lst_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_d = n % 10;
	if (n > 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_d);
	}
	else if (lst_d == 0)
	{
		printf("Last digit of %d is %d\n", n, lst_d);
	}
	else
	{
		n = -n;
		printf("Last digit of -%d is %d and is less than 6 and not 0\n", n, lst_d);
	}
	return (0);

}
