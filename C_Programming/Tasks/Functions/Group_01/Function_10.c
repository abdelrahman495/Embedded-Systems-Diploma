#include <stdio.h>

void print_perfect_numbers(unsigned int lower_limit, unsigned int higher_limit);
unsigned int is_perfect(unsigned int number);

int main(void)
{
    unsigned int user_lower_limit = 0;
    unsigned int user_higher_limit = 0;

    printf("Input lowest search limit of perfect numbers: ");
    scanf("%i", &user_lower_limit);

    printf("Input highest search limit of perfect numbers: ");
    scanf("%i", &user_higher_limit);

    print_perfect_numbers(user_lower_limit, user_higher_limit);

    return 0;
}

void print_perfect_numbers(unsigned int lower_limit, unsigned int higher_limit)
{
    unsigned int number_index = 0;

    for (number_index = lower_limit; number_index <= higher_limit; number_index++)
    {
        if (is_perfect(number_index))
        {
            printf("%i\t", number_index);
        }
        else
        {}
    }
}

unsigned int is_perfect(unsigned int number)
{
    unsigned int divisor = 1;
    unsigned int sum = 0;
    unsigned int return_value = 0;

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

    if (number == sum)
    {
        return_value = 1;
    }
    else
    {}

    return return_value;
}