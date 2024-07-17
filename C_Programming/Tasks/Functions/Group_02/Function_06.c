#include <stdio.h>

void print_prime_numbers(signed int lower_limit, signed int upper_limit);
unsigned int is_prime(signed int number);

int main(void)
{
    signed int user_lower_limit = 0;
    signed int user_upper_limit = 0;

    printf("Input lower limit: ");
    scanf("%d", &user_lower_limit);

    printf("Input upper limit: ");
    scanf("%d", &user_upper_limit);

    print_prime_numbers(user_lower_limit, user_upper_limit);

    return 0;
}

void print_prime_numbers(signed int lower_limit, signed int upper_limit)
{
    signed int number_index = 0;

    printf("Prime numbers between %d-%d are: ", lower_limit, upper_limit);

    for (number_index = lower_limit; number_index <= upper_limit; number_index++)
    {
        if (is_prime(number_index))
        {
            printf("%d, ", number_index);
        }
        else
        {}
    }

    printf("\n");
}

unsigned int is_prime(signed int number)
{
    unsigned int divisor = 2;
    unsigned int factors = 1;

    while (number > 1)
    {
        if (number % divisor == 0)
        {
            number /= divisor;
            factors++;
        }
        else
        {
            divisor++;
        }
    }

    return (2 == factors) ? 1 : 0;
}