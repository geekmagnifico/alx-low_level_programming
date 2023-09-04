#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * Print the result, followed by a new line
 * @argc: number of arguments passed to program.
 * @argv: array of pointer to arguments.
 *
 * Return: 1 if  number contains symbols that are not digits.
 *       : 0 at success.
 */

int main(int argc, char *argv[]) 
{
	if (argc != 3) 
	{
		printf("Error\n");
		return 1;
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = num1 * num2;

	printf("%d\n", result);

    return 0;
}

