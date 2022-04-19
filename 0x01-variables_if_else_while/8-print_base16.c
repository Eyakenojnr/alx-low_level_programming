#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all the digits of base16 in lowercase
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
		putchar(c);
	for (c = 'a'; c <= '5'; ++c)
		putchar(c);

	putchar('\n');

	return (0);
}
