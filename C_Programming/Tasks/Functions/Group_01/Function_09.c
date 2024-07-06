#include <stdio.h>
#include <math.h>

unsigned int is_armstrong(unsigned int number);
unsigned int is_perfect(unsigned int number);

int main(void)
{
    unsigned int user_number = 0;

    printf("Input any number: ");
    scanf("%i", &user_number);

    if (is_armstrong(user_number))
    {
        printf("The %i is an Armstrong number\n", user_number);
    }
    else
    {
        printf("The %i is not an Armstrong number\n", user_number);
    }

    if (is_perfect(user_number))
    {
        printf("The %i is a Perfect number\n", user_number);
    }
    else
    {
        printf("The %i is not a Perfect number\n", user_number);
    }

    return 0;
}

unsigned int is_armstrong(unsigned int number)
{
    unsigned int temp_number = number;
    unsigned int digit_counter = 0;
    unsigned int digit_index = 0;
    unsigned int value = 0;
    unsigned int modulus = 10;
    unsigned int divisor = 1;
    unsigned int sum = 0;
    unsigned int return_value = 0;

    while (temp_number > 0)
    {
        temp_number /= 10;
        digit_counter++;
    }

    for (digit_index = 0; digit_index < digit_counter; digit_index++)
    {
        value = (number % modulus) / divisor;
        sum += pow(value, digit_counter);
        modulus *= 10;
        divisor *= 10;
    }

    if (sum == number)
    {
        return_value = 1;
    }
    else
    {}

    return return_value;
}

unsigned int is_perfect(unsigned int number)
{
    unsigned int divisor = 0;
    unsigned int sum = 0;
    unsigned int return_value = 0;

    for (divisor = 1; divisor < number; divisor++)
    {
        if (number % divisor == 0)
        {
            sum += divisor;
        }
        else
        {}
    }

    if (number == sum)
    {
        return_value = 1;
    }
    else
    {}

    return return_value;
}