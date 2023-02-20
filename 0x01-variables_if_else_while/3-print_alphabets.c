#include <stdio.h>

/**
 * main - program that prints out the alphabts both in lower and upprcase
 * Return: Always(0)
 */
int main(void)
{
	for (letter = 'a'; letter <= 'z'; letter++)

	{
		putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
	putchar(letter);
}
putchar('\n);
return (0);
}
