#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string length to be returned.
 *
 * Return: string length.
 */

int _strlen_recursion(char *s)
{
	int string_len = 0;

	if (*s)
	{
		string_len++;
		string_len += _strlen_recursion(s + 1);
	}

	return (string_len);
}
