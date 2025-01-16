#include <stdio.h>

int main ()
{
    int PayRate_normal = 1000;
    int PayRate_overtime = 1500;

    int hours_normal, hours_overtime;

    printf("Enter the worktime hours: \n");
    scanf("%d", &hours_normal);

    printf("Enter the overtime hours: \n");
    scanf("%d", &hours_overtime);

    int normal_salary = PayRate_normal * hours_normal;
    int overtime_salary = PayRate_overtime * hours_overtime;

    int result = normal_salary + overtime_salary;
    printf("The total salary of the employee is: Rs %d \n", result);

    getchar();
}
