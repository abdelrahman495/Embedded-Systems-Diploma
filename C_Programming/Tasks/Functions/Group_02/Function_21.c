#include <stdio.h>

unsigned int find_lcm(unsigned int first_number, unsigned int second_number);

int main(void)
{
    unsigned int user_first_number = 0;
    unsigned int user_second_number = 0;
    unsigned int lcm = 0;

    printf("Input first number: ");
    scanf("%i", &user_first_number);

    printf("Input second number: ");
    scanf("%i", &user_second_number);

    lcm = (user_first_number < user_second_number) ? find_lcm(user_first_number, user_second_number) : find_lcm(user_second_number, user_first_number);

    printf("LCM of %i and %i = %i\n", user_first_number, user_second_number, lcm);

    return 0;
}

unsigned int find_lcm(unsigned int first_number, unsigned int second_number)
{
    static unsigned int multiple = 0;
    unsigned int return_value = 0;

    multiple += second_number;

    return_value = (multiple % first_number == 0) ? multiple : find_lcm(first_number, second_number);

    return return_value;
}