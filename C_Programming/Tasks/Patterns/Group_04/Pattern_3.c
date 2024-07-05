#include <stdio.h>

void palindrome_full_pyramid(unsigned int height);

int main(void)
{
    unsigned int user_height = 0;

    printf("Enter the height: ");
    scanf("%i", &user_height);

    palindrome_full_pyramid(user_height);

    return 0;
}

void palindrome_full_pyramid(unsigned int height)
{
    unsigned int height_index = 0;
    unsigned int number_index = 0;
    unsigned int space_index = 0;

    for (height_index = 1; height_index <= height; height_index++)
    {
        for (space_index = 1; space_index <= height - height_index; space_index++)
        {
            printf("  ");
        }
        for (number_index = 1; number_index <= height_index; number_index++)
        {
            printf("%i ", number_index);
        }
        for (number_index = height_index - 1; number_index >= 1; number_index--)
        {
            printf("%i ", number_index);
        }
        printf("\n");
    }
}