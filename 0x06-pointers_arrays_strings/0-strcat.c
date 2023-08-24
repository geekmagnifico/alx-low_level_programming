#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 *
 */
char *_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	/* Move dest pointer to the end of the destination string*/
	while (*dest) 
	{
		dest++;
	}

    /* Copy characters from src to dest*/
	while (*src) 
	{
		*dest++ = *src++;
	}

	*dest = '\0'; // Add null terminator

	return originalDest;
}
