#include <stdio.h>
/**
 * main -prints all possible cominations of single digit numbers
 * Return:Always 0
 */

int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');
		if (k < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
		return (0);
}
