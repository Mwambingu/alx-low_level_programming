#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, num2, ans;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');

			ans = num * num2;

			if (ans <= 9)
				_putchar(' ');
			else
				_putchar((ans / 10) + '0');

			_putchar((ans % 10) + '0');
		}
		_putchar('\n');
	}
}
