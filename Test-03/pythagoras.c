#include <stdio.h>
#include <math.h>

int main () {
    int base, height, hyp;

    printf("Enter the sides of triangle: \n");

    printf("Base: ");
    scanf("%d", &base);

    printf("Height: ");
    scanf("%d", &height);

    printf("Hypotenuse: ");
    scanf("%d", &hyp);

    printf("\n");
    if ( pow(base, 2) + pow(height, 2) == pow(hyp, 2) )
        printf("It is a Right-Angled Triangle !");
    else
        printf("It is not a Right-Angled Triangle !");

    printf("\n");
    return 0;
}
