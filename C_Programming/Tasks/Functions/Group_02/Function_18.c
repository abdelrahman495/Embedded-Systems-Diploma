#include <stdio.h>

signed int factorial(signed int number);

int main(void)
{
    signed int user_number = 0;

    printf("Input any number: ");
    scanf("%d", &user_number);

    (user_number >= 0) ? printf("Factorial of %d = %d\n", user_number, factorial(user_number)) : printf("Negative numbers are invalid\n");

    return 0;
}

signed int factorial(signed int number)
{
    return (0 == number) ? 1 : (number * factorial(number - 1));
}