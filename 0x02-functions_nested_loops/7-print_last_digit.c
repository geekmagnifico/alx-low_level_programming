#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The input number
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n; /* Make n positive if it's negative */
	}

	last_digit = n % 10;
	printf("%d\n", last_digit);

	return last_digit;

}
