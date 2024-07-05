#include <stdio.h>

void hollow_full_pyramid(unsigned int height);

int main(void)
{
    unsigned int user_height = 0;

    printf("Enter the height: ");
    scanf("%i", &user_height);

    hollow_full_pyramid(user_height);

    return 0;
}

void hollow_full_pyramid(unsigned int height)
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
        for (number_index = height_index; number_index <= 2 * height_index - 1; number_index++)
        {
            if ((1 == height_index) || (height_index == height) || (number_index == height_index))
            {
                printf("%i ", number_index);
            }
            else
            {
                printf("  ");
            }
        }
        for (number_index = 2 * height_index - 2; number_index >= height_index; number_index--)
        {
            if ((height_index == height) || (number_index == height_index))
            {
                printf("%i ", number_index);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}