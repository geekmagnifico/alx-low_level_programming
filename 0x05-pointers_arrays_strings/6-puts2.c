#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

void puts2(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        _putchar(str[i]);
        i += 2;
    }
}
