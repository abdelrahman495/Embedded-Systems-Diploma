#include <stdio.h>

unsigned long decimal_to_binary(unsigned int decimal);

int main(void)
{
    unsigned int user_decimal = 0;
    unsigned int user_binary = 0;

    printf("Input any decimal number: ");
    scanf("%i", &user_decimal);

    user_binary = decimal_to_binary(user_decimal);
    printf("The binary value is: %li\n", user_binary);

    return 0;
}

unsigned long decimal_to_binary(unsigned int decimal)
{
    unsigned long binary = 0;
    unsigned int remainder = 0;
    unsigned int digit_place = 1;

    while (decimal > 0)
    {
        remainder = decimal % 2;
        binary += remainder * digit_place;
        digit_place *= 10;
        decimal /= 2;
    }

    return binary;
}