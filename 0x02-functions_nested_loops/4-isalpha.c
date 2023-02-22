#include "main.h"
/**
 * _isalpha - program  that checks for alphabetic character.
 * Return: 1 success otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
