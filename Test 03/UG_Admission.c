#include <stdio.h>

int main() {

    int total_matric = 1100;
    int total_inter = 1100;
    int total_entrytest = 100;

    int obt_matric, obt_inter, obt_entry;

    printf("\nEnter your Matric marks (Obtained): ");
    scanf("%d", &obt_matric);

    printf("Enter your FSc marks (Obtained): ");
    scanf("%d", &obt_inter);

    printf("\nEnter your Entry_Test marks (Out of 100): ");
    scanf("%d", &obt_entry);

    float percent_m = ((float) obt_matric / total_matric) * 100;
    float percent_f = ((float) obt_inter / total_inter) * 100;
    float percent_e = ((float) obt_entry / total_entrytest) * 100;

    printf("\n");

    if (percent_m >= 60 && percent_f >= 65 && percent_e >= 65)
        printf("You are eligible for admission !");
    else
        printf("You are not qualified for admission !");

    printf("\n");
    return 0;
}
