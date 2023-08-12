#include <stdio.h>

/**
 * main - main block
 * Description: Print all the numbers of base 16
 * in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char hex_digit;

	for (hex_digit = '0'; hex_digit <= '9'; hex_digit++)
		putchar(hex_digit);

	for (hex_digit = 'a'; hex_digit <= 'f'; hex_digit++)
		putchar(hex_digit);

	putchar('\n');
	return (0);
}
