#include <stdio.h>

void inverted_full_pyramid(unsigned int height);

int main(void)
{
    unsigned int user_height = 0;

    printf("Enter the height: ");
    scanf("%i", &user_height);

    inverted_full_pyramid(user_height);

    return 0;
}

void inverted_full_pyramid(unsigned int height)
{
    unsigned int height_index = 0;
    unsigned int asterisk_index = 0;
    unsigned int space_index = 0;

    for (height_index = 1; height_index <= height; height_index++)
    {
        for (space_index = 1; space_index < height_index; space_index++)
        {
            printf(" ");
        }
        for (asterisk_index = height_index; asterisk_index <= 2 * height - height_index; asterisk_index++)
        {
            printf("*");
        }
        printf("\n");
    }
}