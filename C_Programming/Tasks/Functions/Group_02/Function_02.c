#include <stdio.h>

#define PI (3.14159265358979323846)

double find_diameter(double radius);
double find_circumference(double radius);
double find_area(double radius);

int main(void)
{
    double user_radius = 0;
    printf("Input radius: ");
    scanf("%lf", &user_radius);

    printf("Diameter = %0.2lf units\n", find_diameter(user_radius));
    printf("Circumference = %0.2lf units\n", find_circumference(user_radius));
    printf("Area = %0.2lf sq. units\n", find_area(user_radius));

    return 0;
}

double find_diameter(double radius)
{
    return (2 * radius);
}

double find_circumference(double radius)
{
    return (2 * PI * radius);
}

double find_area(double radius)
{
    return (PI * radius * radius);
}