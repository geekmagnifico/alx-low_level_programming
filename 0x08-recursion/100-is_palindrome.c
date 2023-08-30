#include <stdio.h>
#include "main.h"

/**
 * string_length - obtains length of s
 * @s: string
 * @length: integer to count length
 *
 * Return: On success the length
 * On error, -1 is returned, and errno is set appropriately.
 */


int string_length(char *s)
{
	int length = 0;
	
	while (s[length] != '\0')
	{
		length++;
	}

	return length;
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int is_palindrome(char *s)
{
	int i, j, length = string_length(s);

	length = string_length(s);

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j]) 
		{
			return 0; /* Not a palindrome*/
		}
	}

	return 1; /* Palindrome*/
}
