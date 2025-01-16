#include <stdio.h>

int main ()
{
    int number;

    printf("Enter a 5-digit number: \n");
    scanf("%d", &number);

    if (number >= 10000 && number < 100000) {
        int last_digit = number % 10;
        int first_digit = (int)number / 10000;

        int result = first_digit + last_digit;
        printf("This is the sum: %d \n", result);
    } else {
        printf("Invalid! It was not a five-digit number. Exiting...\n");
    }

    return 0;
}
