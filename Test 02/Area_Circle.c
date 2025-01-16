#include <stdio.h>
#include <math.h>

int main () {
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = M_PI * powf(radius, 2);
    printf("The Area of the Circle is: %.2f \n", area);

    return 0;
}
