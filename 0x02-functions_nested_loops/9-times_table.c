#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, result;

	i = 0;
	while (i < 10)
	{
		j = 9;

		result = j * i;

		_putchar(result + '0');
		i++;
	}
}
