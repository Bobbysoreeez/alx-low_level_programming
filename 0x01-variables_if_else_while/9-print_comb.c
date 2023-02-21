#include <stdio.h>
/**
 * main -prints all possible cominations of single digit numbers
 */

int main(void)
{
	int k, l;

	for (k = 0; k < 10; k++)
	{
		for (l = 0; l < 10; l++)
			putchar(k + '0');
		putchar(l + '0');

		if (k < 9 || l < 9)
		{
		putchar(',');
	putchar(' ');
		}
	}
return (0);
}
