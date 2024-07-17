#include <stdio.h>

void print_strong_numbers(signed int lower_limit, signed int upper_limit);
unsigned int is_strong(signed int number);
unsigned int get_factorial(unsigned int digit);

int main(void)
{
    signed int user_lower_limit = 0;
    signed int user_upper_limit = 0;

    printf("Input lower limit: ");
    scanf("%d", &user_lower_limit);
    
    printf("Input upper limit: ");
    scanf("%d", &user_upper_limit);

    print_strong_numbers(user_lower_limit, user_upper_limit);

    return 0;
}

void print_strong_numbers(signed int lower_limit, signed int upper_limit)
{
    signed int number_index = 0;

    printf("Strong numbers between %d to %d: ", lower_limit, upper_limit);

    for (number_index = lower_limit; number_index <= upper_limit; number_index++)
    {
        if (is_strong(number_index))
        {
            printf("%d, ", number_index);
        }
        else
        {}
    }

    printf("\n");
}

unsigned int is_strong(signed int number)
{
    signed int temp_number = number;
    unsigned int digit_counter = 0;
    unsigned int digit = 0;
    unsigned int modulus = 10;
    unsigned int divisor = 1;
    signed int sum = 0;

    while (temp_number > 0)
    {
        temp_number /= 10;
        digit_counter++;
    }

    while (digit_counter > 0)
    {
        digit = (number % modulus) / divisor;
        sum += get_factorial(digit);
        modulus *= 10;
        divisor *= 10;
        digit_counter--;
    }

    return (sum == number) ? 1 : 0;
}

unsigned int get_factorial(unsigned int digit)
{
    unsigned int result = 1;

    while (digit > 1)
    {
        result *= digit;
        digit--;
    }

    return result;
}