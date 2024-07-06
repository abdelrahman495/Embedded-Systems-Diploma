#include <stdio.h>

signed int sum(signed int first_number, signed int second_number);

int main(void)
{
    signed int result = 0;
    result = sum(2, -3);
    printf("The result is: %i\n", result);

    return 0;
}

signed int sum(signed int first_number, signed int second_number)
{
    return (first_number + second_number);
}