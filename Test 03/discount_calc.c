#include <stdio.h>

int main () {
    float bill;
    int disc;

    printf("Please enter the bill (Rs): \n");
    scanf("%f", &bill);

    if (bill < 1000)
        disc = 0;
    if (bill >= 1000)
        disc = 10;
    if (bill >= 2500)
        disc = 20;
    if (bill >= 5000)
        disc = 35;
    if (bill >= 10000)
        disc = 50;

    float total = (float)(bill * (100-disc) / 100);

    printf("The total amount is: Rs%0.2f \n", total);
    return 0;
}
