#include <stdio.h>

int main () {
    int a, b;

    printf("Enter two numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (b % a == 0)
        printf("The number %d is a factor of %d", a, b);
    else
        printf("The number %d is not a factor of %d", a, b);

    printf("\n");
    return 0;
}
