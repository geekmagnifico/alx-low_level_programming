#include <stdio.h>

/**
 * main -  prints its name, followed by a new line.
 *  you rename the program, it will print the new name,
 * @argc: number of characters
 * @argv: array containing names of objects passed
 *
 * Return: 0.
 */

int main(int  __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
