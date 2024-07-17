#include <stdio.h>

double find_power(double base, signed int exponent);

int main(void)
{
    double user_base = 0;
    signed int user_exponent = 0;

    printf("Input base number: ");
    scanf("%lf", &user_base);

    printf("Input power: ");
    scanf("%d", &user_exponent);

    printf("%lf ^ %d = %lf\n", user_base, user_exponent, find_power(user_base, user_exponent));

    return 0;
}

double find_power(double base, signed int exponent)
{
    double return_value = 0;

    if (0 == exponent)
    {
        return_value = 1;
    }
    else if (exponent > 0)
    {
        return_value = (find_power(base, exponent - 1) * base);
    }
    else
    {
        return_value = (find_power(base, exponent + 1) / base);
    }

    return return_value;
}

/*
// Another approach:
double find_power(double base, signed int exponent)
{
    double return_value = 0;

    if (0 == exponent)
    {
        return_value = 1;
    }
    else if (exponent > 0)
    {
        return_value = (base * find_power(base, exponent - 1));
    }
    else
    {
        return_value = (1 / find_power(base, -exponent));
    }

    return return_value;
}
*/