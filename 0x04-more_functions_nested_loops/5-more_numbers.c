#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int i, a;

	for (a = 0 ; a <= 9; a++)
	{
		for (i = 0 ; i <= 14; i++)
		{
			if (i  > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
