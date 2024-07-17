#include <stdio.h>
#include <math.h>

void print_armstrong_numbers(signed int lower_limit, signed int upper_limit);
unsigned int is_armstrong(signed int number);

int main(void)
{
    signed int user_lower_limit = 0;
    signed int user_upper_limit = 0;

    printf("Input lower limit: ");
    scanf("%d", &user_lower_limit);

    printf("Input upper limit: ");
    scanf("%d", &user_upper_limit);

    print_armstrong_numbers(user_lower_limit, user_upper_limit);

    return 0;
}

void print_armstrong_numbers(signed int lower_limit, signed int upper_limit)
{
    signed int number_index = 0;

    printf("Armstrong numbers between %d to %d are: ", lower_limit, upper_limit);

    for (number_index = lower_limit; number_index <= upper_limit; number_index++)
    {
        if (is_armstrong(number_index))
        {
            printf("%d, ", number_index);
        }
        else
        {}
    }

    printf("\n");
}

unsigned int is_armstrong(signed int number)
{
    signed int temp_number = number;
    unsigned int digits = 0;
    unsigned int index = 0;
    signed int sum = 0;
    unsigned int modulus = 10;
    unsigned int divisor = 1;

    while (temp_number >= 1)
    {
        temp_number /= 10;
        digits++;
    }

    for (index = 0; index < digits; index++)
    {
        sum += pow((number % modulus) / divisor, digits);
        modulus *= 10;
        divisor *= 10;
    }

    return (sum == number) ? 1 : 0;
}