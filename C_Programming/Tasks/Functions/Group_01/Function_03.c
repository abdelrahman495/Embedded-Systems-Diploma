#include <stdio.h>

void swap(signed int *number_1, signed int *number_2);

int main(void)
{
    signed int user_number_1 = 0;
    signed int user_number_2 = 0;

    printf("Input 1st number: ");
    scanf("%d", &user_number_1);
    printf("Input 2nd number: ");
    scanf("%d", &user_number_2);

    printf("Before swapping: n1 = %d, n2 = %d\n", user_number_1, user_number_2);
    swap(&user_number_1, &user_number_2);
    printf("After swapping: n1 = %d, n2 = %d\n", user_number_1, user_number_2);

    return 0;
}

void swap(signed int *number_1, signed int *number_2)
{
    signed int tmp = 0;

    tmp = *number_1;
    *number_1 = *number_2;
    *number_2 = tmp;
}