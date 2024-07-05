#include <stdio.h>

void solid_half_diamond(unsigned int width);

int main(void)
{
    unsigned int user_width = 0;

    printf("Enter the width: ");
    scanf("%i", &user_width);

    solid_half_diamond(user_width);

    return 0;
}

void solid_half_diamond(unsigned int width)
{
    unsigned int width_index = 0;
    unsigned int asterisk_index = 0;

    for (width_index = 1; width_index <= width; width_index++)
    {
        for (asterisk_index = 1; asterisk_index <= width_index; asterisk_index++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (width_index = 1; width_index <= width - 1; width_index++)
    {
        for (asterisk_index = 1; asterisk_index <= width - width_index; asterisk_index++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*
// Another approach:
void solid_half_diamond(unsigned int width)
{
    unsigned int width_index = 0;
    unsigned int asterisk_index = 0;

    for (width_index = 1; width_index <= 2 * width - 1; width_index++)
    {
        if (width_index <= width)
        {
            for (asterisk_index = 1; asterisk_index <= width_index; asterisk_index++)
            {
                printf("*");
            }
        }
        else
        {
            for (asterisk_index = 1; asterisk_index <= width - (width_index - width); asterisk_index++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
*/