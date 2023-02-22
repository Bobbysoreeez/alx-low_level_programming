#include "main.h"
/**
 * print_sign -prints the sign of number
 * @n: number to be printed the sign
 * Return: 1 0 and -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	return (0);
	}

}
