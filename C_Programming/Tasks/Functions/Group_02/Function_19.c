#include <stdio.h>

unsigned int nth_fibonacci(unsigned int number);

int main(void)
{
    unsigned int user_number = 0;

    printf("Input any number: ");
    scanf("%i", &user_number);

    if ((user_number % 10 == 1) && (user_number != 11))
    {
        printf("%ist Fibonacci term: %i\n", user_number, nth_fibonacci(user_number));
    }
    else if ((user_number % 10 == 2) && (user_number != 12))
    {
        printf("%ind Fibonacci term: %i\n", user_number, nth_fibonacci(user_number));
    }
    else if ((user_number % 10 == 3) && (user_number != 13))
    {
        printf("%ird Fibonacci term: %i\n", user_number, nth_fibonacci(user_number));
    }
    else
    {
        printf("%ith Fibonacci term: %i\n", user_number, nth_fibonacci(user_number));
    }

    return 0;
}

unsigned int nth_fibonacci(unsigned int number)
{
    unsigned int return_value = 0;

    if (0 == number)
    {
        return_value = 0;
    }
    else if (1 == number)
    {
        return_value = 1;
    }
    else
    {
        return_value = nth_fibonacci(number - 1) + nth_fibonacci(number - 2);
    }

    return return_value;
}