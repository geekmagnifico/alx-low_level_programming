#include "main.h"

/**
 * swap_int - swape two pointers
 * @a: first pointer
 * @b: seconde pointer
 *
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
