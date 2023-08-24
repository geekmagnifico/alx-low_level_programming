#include <stdio.h>

/**
 * Concatenates the source string to the destination string.
 * Appends the characters of the source string to the end of the destination string,
 * overwriting the terminating null byte of the destination, and adds a new null byte.
 *
 * @param dest Pointer to the destination string.
 * @param src  Pointer to the source string.
 * @return Pointer to the resulting concatenated string (same as dest).
 */
char *_strcat(char *dest, char *src) {
    char *originalDest = dest;

    while (*dest) {
        dest++;
    }

    while (*src) {
        *dest++ = *src++;
    }

    *dest = '\0';

    return originalDest;
}

