#include "main.h"
/**
 * main - program that checks for lowercase letters
 * Return: 1 success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
