#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the alphabet in lowercase, and then in uppercase'
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int o = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (o <= 90)
	{
		putchar(o);
	}
	putchar('\n');
	return (0);
}
