#include <stdio.h>

void print_perfect_numbers(signed int lower_limit, signed int upper_limit);
unsigned int is_perfect(signed int number);

int main(void)
{
    signed int user_lower_limit = 0;
    signed int user_upper_limit = 0;

    printf("Input lower limit: ");
    scanf("%d", &user_lower_limit);

    printf("Input upper limit: ");
    scanf("%d", &user_upper_limit);

    print_perfect_numbers(user_lower_limit, user_upper_limit);

    return 0;
}

void print_perfect_numbers(signed int lower_limit, signed int upper_limit)
{
    signed int number_index = 0;

    printf("Perfect numbers: ");

    for (number_index = lower_limit; number_index <= upper_limit; number_index++)
    {
        if (is_perfect(number_index))
        {
            printf("%d, ", number_index);
        }
        else
        {}
    }

    printf("\n");
}

unsigned int is_perfect(signed int number)
{
    unsigned int divisor = 1;
    signed int sum = 0;

    while (divisor < number)
    {
        if (number % divisor == 0)
        {
            sum += divisor;
        }
        else
        {}

        divisor++;
    }

    return (sum == number) ? 1 : 0;
}