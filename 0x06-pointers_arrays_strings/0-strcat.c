#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *str;

	str = dest;

	while (str != '\0')
		str++;

	while (src[j] != '\0')
	{
		*str = *src;
		str++;
		src++;
	}

	str = '\0';

	return (str);
}
