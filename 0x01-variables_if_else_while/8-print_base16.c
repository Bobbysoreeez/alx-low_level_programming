#include <stdio.h>
/**
 * main -this program prints the base 16 numbers
 * Return:Always 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');

	for (a = 'a'; a < 'g'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
