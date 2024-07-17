#include <stdio.h>
#include <math.h>

unsigned int is_palindrome(signed int number);
signed int reverse(signed int number);

int main(void)
{
    signed int user_number = 0;

    printf("Input number: ");
    scanf("%d", &user_number);

    is_palindrome(user_number) ? printf("%d is palindrome\n", user_number) : printf("%d is not palindrome\n", user_number);

    return 0;
}

unsigned int is_palindrome(signed int number)
{
    return (number == reverse(number)) ? 1 : 0;
}

signed int reverse(signed int number)
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
        return_value = number % 10 * (signed int) pow(10, digit_counter) + reverse(number / 10);
    }

    return return_value;
}

/*
Note: This solution does not handle test cases where the user's input starts with zero.
*/

/*
// Another approach:
unsigned int is_palindrome(signed int number)
{
    unsigned int return_value = 0;
    signed int exponent = 0;

    if (number == 0)
    {
        return_value = 1;
    }
    else
    {
        exponent = (int) log10(number);
        
        if ((number / (int) pow(10, exponent)) == (number % 10))
        {
            return_value = is_palindrome((number / 10) % (int) pow(10, exponent - 1));
        }
        else
        {
            return_value = 0;
        }
    }

    return return_value;
}

Note: This solution does not handle test cases where the user's input starts with zero or contains zeros in the middle of the number.
*/