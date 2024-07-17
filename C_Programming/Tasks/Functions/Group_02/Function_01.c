#include <stdio.h>

signed int find_cube(signed int number);

int main(void)
{
    signed int user_number = 0;
    printf("Input any number: ");
    scanf("%d", &user_number);

    printf("Cube of %d = %d\n", user_number, find_cube(user_number));

    return 0;
}

signed int find_cube(signed int number)
{
    return (number * number * number);
}