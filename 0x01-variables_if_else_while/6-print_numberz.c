#include <stdio.h>
/**
 * main - prints the numbers base ten incluuding zero
 * Return: Always 0
 */

int main(void)
{
	char i = '0';

	for (i = 0; i <= 9; i++)
		putchar(i);

	putchar("\n");

	return (0);
}
