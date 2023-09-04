#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *  followed by a new line.
 * @argc: number of argumets.
 * @argv: names of arguments.
 *
 * Return: 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
