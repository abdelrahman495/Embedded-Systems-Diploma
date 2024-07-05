#include <stdio.h>

void hollow_half_pyramid(unsigned int height);

int main(void)
{
    unsigned int user_height = 0;

    printf("Enter the height: ");
    scanf("%i", &user_height);

    hollow_half_pyramid(user_height);

    return 0;
}

void hollow_half_pyramid(unsigned int height)
{
    unsigned int height_index = 0;
    unsigned int width_index = 0;

    for (height_index = 1; height_index <= height; height_index++)
    {
        for (width_index = 1; width_index <= height_index; width_index++)
        {
            if ((1 == height_index) || (height_index == height) || (1 == width_index) || (width_index == height_index))
            {
                printf("%i ", width_index);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}