#include <stdio.h>

unsigned int even_or_odd(unsigned int number);

int main(void)
{
    unsigned int user_number = 0;

    printf("Input any number: ");
    scanf("%i", &user_number);

    if (even_or_odd(user_number))
    {
        printf("The entered number is odd\n");
    }
    else
    {
        printf("The entered number is even\n");
    }

    return 0;
}

unsigned int even_or_odd(unsigned int number)
{
    return (number % 2);
}

/*
// Another approach:
unsigned int even_or_odd(unsigned int number)
{
    return (number & 1);
}
*/