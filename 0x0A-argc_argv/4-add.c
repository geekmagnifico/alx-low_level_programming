#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * print the result of the multiplication, followed by a new line
 * @argc: number of arguments
 * @argv: array of characters(to be converted to int)
 *
 * Return: 1 if number of argc is not 3, or 0 at success.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	/* atoi converts a character string to an integer value */
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
