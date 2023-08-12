#include <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void) {
    char lowercase = 'a';
    char uppercase = 'A';

    // Print lowercase alphabet
    while (lowercase <= 'z') {
        putchar(lowercase);
        lowercase++;
    }

    // Print uppercase alphabet
    while (uppercase <= 'Z') {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n');

    return 0;
}
