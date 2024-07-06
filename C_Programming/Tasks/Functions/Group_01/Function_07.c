#include <stdio.h>

unsigned int is_prime(unsigned int number);

int main(void)
{
    unsigned int user_number = 0;

    printf("Input a positive number: ");
    scanf("%i", &user_number);

    if (is_prime(user_number))
    {
        printf("The number %i is a prime number.\n", user_number);
    }
    else
    {
        printf("The number %i is not a prime number.\n", user_number);
    }

    return 0;
}

unsigned int is_prime(unsigned int number)
{
    unsigned int divisor = 2;
    unsigned int factors = 0;
    unsigned int return_value = 0;

    while (number >= 1)
    {
        if (1 == number)
        {
            factors++;
            break;
        }
        else if (number % divisor == 0)
        {
            number /= divisor;
            factors++;
        }
        else
        {
            divisor++;
        }
    }

    if (2 == factors)
    {
        return_value = 1;
    }
    else
    {}

    return return_value;
}