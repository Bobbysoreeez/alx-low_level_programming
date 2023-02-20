#include <stdio.h>
/**
 * main - Description: prints all alphabts in lower case
 * Return: Always 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')

	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
