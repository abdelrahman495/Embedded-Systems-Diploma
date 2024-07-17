#include <stdio.h>

void print_natural_numbers(signed int lower_limit, signed int upper_limit);

int main(void)
{
    signed int user_lower_limit = 0;
    signed int user_upper_limit = 0;

    printf("Input lower limit: ");
    scanf("%d", &user_lower_limit);

    printf("Input upper limit: ");
    scanf("%d", &user_upper_limit);

    printf("Natural numbers between %d to %d: ", user_lower_limit, user_upper_limit);
    print_natural_numbers(user_lower_limit, user_upper_limit);

    return 0;
}

void print_natural_numbers(signed int lower_limit, signed int upper_limit)
{
    if ((lower_limit == upper_limit) && (upper_limit > 0))
    {
        printf("%d\n", upper_limit);
    }
    else if (lower_limit < upper_limit)
    {
        if (lower_limit > 0)
        {
            printf("%d, ", lower_limit);
        }
        else
        {}

        print_natural_numbers(lower_limit + 1, upper_limit);
    }
    else
    {
        printf("\n");
    }
}