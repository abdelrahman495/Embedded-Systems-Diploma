#include <stdio.h>

void palindrome_half_diamond(unsigned int width);

int main(void)
{
    unsigned int user_width = 0;

    printf("Enter the width: ");
    scanf("%i", &user_width);

    palindrome_half_diamond(user_width);

    return 0;
}

void palindrome_half_diamond(unsigned int width)
{
    unsigned int width_index = 0;
    unsigned int number_index = 0;

    printf("*\n");
    for (width_index = 1; width_index <= width; width_index++)
    {
        printf("* ");
        for (number_index = 1; number_index <= width_index; number_index++)
        {
            printf("%i ", number_index);
        }
        for (number_index = width_index - 1; number_index >= 1; number_index--)
        {
            printf("%i ", number_index);
        }
        printf("*");
        printf("\n");
    }
    for (width_index = width - 1; width_index >= 1; width_index--)
    {
        printf("* ");
        for (number_index = 1; number_index <= width_index; number_index++)
        {
            printf("%i ", number_index);
        }
        for (number_index = width_index - 1; number_index >= 1; number_index--)
        {
            printf("%i ", number_index);
        }
        printf("*");
        printf("\n");
    }
    printf("*\n");
}