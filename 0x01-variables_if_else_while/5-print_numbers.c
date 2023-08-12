#include <stdio.h>
/**
 * main - main block
 * Description: Print all single digit numbers of base 10 starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
        char digit = '0';
        while (digit <= '9')
        {
        putchar(digit);
        digit++;
        }

        putchar('\n');
	return (0);
}
