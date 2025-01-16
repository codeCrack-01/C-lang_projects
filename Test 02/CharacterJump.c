#include <stdio.h>

int main() {
    char character;
    int jumpSize;

    printf("Enter a character: ");
    scanf("%c", &character);

    printf("Enter the jump size: ");
    scanf("%d", &jumpSize);

    // The char internally is an integer pointing to the ASCII Table...
    char next_char = character + jumpSize;

    if (next_char > 'z')
        next_char -= 26;

    printf("\nThe new character after %d jumps is: %c \n", jumpSize, next_char);
}
