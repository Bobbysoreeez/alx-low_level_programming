#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be worked on
 * Return:Always 0 success
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	_putchar(a + '0');

	_putchar('\n');

	return (0);
}
