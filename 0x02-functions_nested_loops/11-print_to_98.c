#include <stdio.h>
#include <main.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98, separated by commas.
 * @n: Starting number
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

int main(void)
{
	int num = 10; // Replace with any number you want
	print_to_98(num);
	return 0;
}

/**
 * print_to_98 - Prints all natural numbers from n to 98, separated by commas.
 * @n: Starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

int main(void)
{
	int num = 10; // Replace with any number you want
	print_to_98(num);
	return 0;
}

