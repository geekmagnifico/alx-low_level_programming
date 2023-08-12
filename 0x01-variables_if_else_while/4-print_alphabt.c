#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void) {
    char letter = 'a';

    while (letter <= 'z') {
        if (letter != 'q' && letter != 'e') {
            putchar(letter);
        }
        letter++;
    }

    putchar('\n');

    return 0;
}
