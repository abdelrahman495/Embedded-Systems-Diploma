#include <stdio.h>
#include <math.h>

unsigned int is_prime(signed int number);
unsigned int is_armstrong(signed int number);
unsigned int is_perfect(signed int number);

int main(void)
{
    signed int user_number = 0;

    printf("Input any number: ");
    scanf("%d", &user_number);

    is_prime(user_number) ? printf("%d is a prime number\n", user_number) : printf("%d is not a prime number\n", user_number);
    is_armstrong(user_number) ? printf("%d is an armstrong number\n", user_number) : printf("%d is not an armstrong number\n", user_number);
    is_perfect(user_number) ? printf("%d is a perfect number\n", user_number) : printf("%d is not a perfect number\n", user_number);

    return 0;
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