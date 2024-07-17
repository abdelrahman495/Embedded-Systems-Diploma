#include <stdio.h>

signed int sum_of_even_numbers(signed int lower_limit, signed int upper_limit);
signed int sum_of_odd_numbers(signed int lower_limit, signed int upper_limit);

int main(void)
{
    signed int user_lower_limit = 0;
    signed int user_upper_limit = 0;
    signed int even_result = 0;
    signed int odd_result = 0;

    printf("Input lower limit: ");
    scanf("%d", &user_lower_limit);

    printf("Input upper limit: ");
    scanf("%d", &user_upper_limit);

    even_result = sum_of_even_numbers(user_lower_limit, user_upper_limit);
    printf("Sum of even numbers between %d to %d = %d\n", user_lower_limit, user_upper_limit, even_result);

    odd_result = sum_of_odd_numbers(user_lower_limit, user_upper_limit);
    printf("Sum of odd numbers between %d to %d = %d\n", user_lower_limit, user_upper_limit, odd_result);

    return 0;
}

signed int sum_of_even_numbers(signed int lower_limit, signed int upper_limit)
{
    signed int sum = 0;

    if ((lower_limit == upper_limit) && (upper_limit % 2 == 0))
    {
        sum = upper_limit;
    }
    else if (lower_limit < upper_limit)
    {
        if (lower_limit % 2 == 0)
        {
            sum = lower_limit + sum_of_even_numbers(lower_limit + 1, upper_limit);
        }
        else
        {
            sum = sum_of_even_numbers(lower_limit + 1, upper_limit);
        }
    }
    else
    {}

    return sum;
}

signed int sum_of_odd_numbers(signed int lower_limit, signed int upper_limit)
{
    signed int sum = 0;

    if ((lower_limit == upper_limit) && (upper_limit % 2 != 0))
    {
        sum = upper_limit;
    }
    else if (lower_limit < upper_limit)
    {
        if (lower_limit % 2 != 0)
        {
            sum = lower_limit + sum_of_odd_numbers(lower_limit + 1, upper_limit);
        }
        else
        {
            sum = sum_of_odd_numbers(lower_limit + 1, upper_limit);
        }
    }
    else
    {}

    return sum;
}