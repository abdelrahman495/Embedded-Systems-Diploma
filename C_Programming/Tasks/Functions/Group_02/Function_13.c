#include <stdio.h>

signed int sum_of_natural_numbers(signed int lower_limit, signed int upper_limit);

int main(void)
{
    signed int user_lower_limit = 0;
    signed int user_upper_limit = 0;
    signed int result = 0;

    printf("Input lower limit: ");
    scanf("%d", &user_lower_limit);

    printf("Input upper limit: ");
    scanf("%d", &user_upper_limit);

    result = sum_of_natural_numbers(user_lower_limit, user_upper_limit);
    printf("Sum of natural numbers from %d to %d = %d\n", user_lower_limit, user_upper_limit, result);

    return 0;
}

signed int sum_of_natural_numbers(signed int lower_limit, signed int upper_limit)
{
    signed int sum = 0;

    if ((lower_limit == upper_limit) && (upper_limit > 0))
    {
        sum = upper_limit;
    }
    else if (lower_limit < upper_limit)
    {
        if (lower_limit > 0)
        {
            sum = lower_limit + sum_of_natural_numbers(lower_limit + 1, upper_limit);
        }
        else
        {
            sum = sum_of_natural_numbers(lower_limit + 1, upper_limit);
        }
    }
    else
    {}

    return sum;
}