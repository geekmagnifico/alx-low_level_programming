#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Sums a variable number of integers
 * @n: The number of integers to sum
 * @...: The integers to be summed
 *
 * Return: The sum of the integers
 */
int sum_them_all(const unsigned int n, ...) {
	if (n == 0)
	{
		return (0);
	}

	int sum = 0;
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	
	va_end(args);

	return (sum);
}
