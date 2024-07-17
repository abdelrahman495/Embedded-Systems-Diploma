#include <stdio.h>

signed int find_max(signed int first_number, signed int second_number);
signed int find_min(signed int first_number, signed int second_number);

int main(void)
{
    signed int user_first_number = 0;
    signed int user_second_number = 0;

    printf("Input two numbers: ");
    scanf("%d", &user_first_number);
    scanf("%d", &user_second_number);

    printf("Maximum = %d\n", find_max(user_first_number, user_second_number));
    printf("Minimum = %d\n", find_min(user_first_number, user_second_number));

    return 0;
}

signed int find_max(signed int first_number, signed int second_number)
{
    return (first_number >= second_number) ? first_number : second_number;
}

signed int find_min(signed int first_number, signed int second_number)
{
    return (first_number <= second_number) ? first_number : second_number;
}