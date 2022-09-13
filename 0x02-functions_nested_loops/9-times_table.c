#include "main.h"

/**
 *  times_table - prints the 9 times table, beginning with 0
 **/

void times_table(void)
{

	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			k = b * a;

			if (b == 0)
			{
				_putchar(k + '0');
			}
			if (k < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
