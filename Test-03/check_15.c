#include <stdio.h>

int main () {
    int num;

    printf("Please enter a number: \n");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        if (num % 10 != 0)
            printf("YES");
    }
    else {
        printf("NO");
    }

    printf("\n");
    return 0;
}
