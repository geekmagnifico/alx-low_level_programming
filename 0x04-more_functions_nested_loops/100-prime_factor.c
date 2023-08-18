#include <stdio.h>
#include <math.h>

/**
 * largestPrimeFactor - Finds the largest prime factor of a given number.
 * @n: The number to find the largest prime factor for.
 *
 * Return: The largest prime factor of the given number.
 */
long long largestPrimeFactor(long long n)
{
	long long maxPrime = -1;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}

	for (int i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		maxPrime = n;
	}

	return maxPrime;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	long long num = 612852475143;
	long long result = largestPrimeFactor(num);

	printf("%lld\n", result);
	return (0);
}

