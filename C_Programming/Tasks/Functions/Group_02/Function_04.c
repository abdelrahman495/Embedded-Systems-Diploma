#include <stdio.h>

unsigned int even_or_odd(signed int number);

int main(void)
{
    signed int user_number = 0;

    printf("Input any number: ");
    scanf("%d", &user_number);

    even_or_odd(user_number) ? printf("%d is even\n", user_number) : printf("%d is odd\n", user_number);

    return 0;
}

unsigned int even_or_odd(signed int number)
{
    return (number % 2 == 0) ? 1 : 0;
}