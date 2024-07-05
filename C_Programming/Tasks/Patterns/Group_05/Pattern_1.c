#include <stdio.h>

void solid_diamond(unsigned int width);

int main(void)
{
    unsigned int user_width = 0;

    printf("Enter the width: ");
    scanf("%i", &user_width);

    solid_diamond(user_width);

    return 0;
}

void solid_diamond(unsigned int width)
{
    unsigned int width_index = 0;
    unsigned int asterisk_index = 0;
    unsigned int space_index = 0;

    for (width_index = 1; width_index <= width; width_index++)
    {
        for (space_index = 1; space_index <= width - width_index; space_index++)
        {
            printf(" ");
        }
        for (asterisk_index = 1; asterisk_index <= width_index; asterisk_index++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (width_index = 1; width_index <= width - 1; width_index++)
    {
        for (space_index = 1; space_index <= width_index; space_index++)
        {
            printf(" ");
        }
        for (asterisk_index = 1; asterisk_index <= width - width_index; asterisk_index++)
        {
            printf("* ");
        }
        printf("\n");
    }
}