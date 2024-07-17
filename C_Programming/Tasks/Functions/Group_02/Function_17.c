#include <stdio.h>

signed int sum_of_digits(signed int number);

int main(void)
{
    signed int user_number = 0;

    printf("Input number: ");
    scanf("%d", &user_number);

    printf("Sum of digits: %d\n", sum_of_digits(user_number));

    return 0;
}

signed int sum_of_digits(signed int number)
{
    signed int return_value = 0;

    if (0 == number)
    {
        return_value = 0;
    }
    else
    {
        return_value = number % 10 + sum_of_digits(number / 10);
    }

    return return_value;
}

/*
// Another approach:
signed int sum_of_digits(signed int number)
{
    return (0 == number) ? 0 : (number % 10 + sum_of_digits(number / 10));
}
*/