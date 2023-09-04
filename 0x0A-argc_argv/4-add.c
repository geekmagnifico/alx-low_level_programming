#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 *
 * This program takes multiple command-line arguments (numbers) and adds them together.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful, 1 if any argument contains symbols that are not digits.
 */

int main(int argc, char *argv[])
{
	 int num, result = 0, digit;

	if (argc < 2)
 	{
		printf("Error\n");
		return 1;
	}

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return 1;
			}
        	}
		result += atoi(argv[num]);
	}

	printf("%d\n", result);
	return 0;
}

