#include <stdio.h>
#include <math.h>

signed int reverse_number(signed int number);

int main(void)
{
    signed int user_number = 0;

    printf("Input number: ");
    scanf("%d", &user_number);

    (user_number >= 0) ? printf("Reverse: %d\n", reverse_number(user_number)) : printf("Reverse: %d\n", -reverse_number(-user_number));

    return 0;
}

signed int reverse_number(signed int number)
{
    signed int temp_number = number;
    unsigned int digit_counter = 0;
    signed int return_value = 0;

    while (temp_number > 0)
    {
        temp_number /= 10;
        digit_counter++;
    }

    if (0 == number)
    {
        return_value = 0;
    }
    else
    {
        return_value = number % 10 * (signed int) pow(10, digit_counter - 1) + reverse_number(number / 10);
    }

    return return_value;
}

/*
// Another approach:
signed int reverse_number(signed int number)
{
    unsigned int digit_counter = 0;
    signed int return_value = 0;

    digit_counter = (unsigned int) log10(number);

    if (0 == number)
    {
        return_value = 0;
    }
    else
    {
        return_value = number % 10 * (signed int) pow(10, digit_counter) + reverse_number(number / 10);
    }

    return return_value;
}
*/

/*
Note: This solution does not handle test cases where the user's input starts with zero.
*/