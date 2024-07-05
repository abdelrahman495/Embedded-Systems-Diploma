#include <stdio.h>

void half_pyramid(unsigned int height);

int main(void)
{
    unsigned int user_height = 0;

    printf("Enter the height: ");
    scanf("%i", &user_height);

    half_pyramid(user_height);

    return 0;
}

void half_pyramid(unsigned int height)
{
    unsigned int height_index = 0;
    unsigned int width_index = 0;

    for (height_index = 1; height_index <= height; height_index++)
    {
        for (width_index = 1; width_index <= height_index; width_index++)
        {
            printf("%i ", width_index);
        }
        printf("\n");
    }
}