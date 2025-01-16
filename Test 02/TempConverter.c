#include <stdio.h>

int main ()
{
    float temp_C, temp_F;

    printf("Enter the temperature in Celsius(°C) : \n");
    scanf("%f", &temp_C);

    temp_F = (1.8* temp_C) + 32;
    printf("The temperatre in Fahrenheit is: %.2f °F \n", temp_F);

    getchar();
    return 0;
}
