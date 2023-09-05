#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: pointer to the created array, or NULL if size is 0 or if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

