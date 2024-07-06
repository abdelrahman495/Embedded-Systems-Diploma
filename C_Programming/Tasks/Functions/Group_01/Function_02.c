#include <stdio.h>

unsigned int square(signed int number);

int main(void)
{
    signed int user_number = 0;
    unsigned int result = 0;

    printf("Enter any number for square: ");
    scanf("%d", &user_number);

    result = square(user_number);
    printf("The square of %d is: %i\n", user_number, result);

    return 0;
}

unsigned int square(signed int number)
{
    return (number * number);
}