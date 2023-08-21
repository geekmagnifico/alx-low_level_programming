#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s) {
	if (s == NULL) {
		return; // Handle NULL input
	}

	char *start = s;
	char *end = s;

	while (*end) {
		++end;
	}
	--end;

	while (start < end) {
		char temp = *start;
		*start = *end;
		*end = temp;

		++start;
		--end;
	}
}

