#include <stdio.h>

unsigned int find_hcf(unsigned int first_number, unsigned int second_number);

int main(void)
{
    unsigned int user_first_number = 0;
    unsigned int user_second_number = 0;

    printf("Input first number: ");
    scanf("%i", &user_first_number);

    printf("Input second number: ");
    scanf("%i", &user_second_number);

    printf("HCF of %i and %i = %i\n", user_first_number, user_second_number, find_hcf(user_first_number, user_second_number));

    return 0;
}

unsigned int find_hcf(unsigned int first_number, unsigned int second_number)
{
    return (0 == second_number) ? first_number : find_hcf(second_number, first_number % second_number);
}