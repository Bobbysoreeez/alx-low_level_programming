#include <stdio.h>
/**
 * main - this program prints the putchar string
 * Return:Always 0
 */
int main(void)
{
	char *str = "_putchar";

	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
