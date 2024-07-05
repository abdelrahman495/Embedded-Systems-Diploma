#include <stdio.h>

void half_diamond(unsigned int width);

int main(void)
{
    unsigned int user_width = 0;

    printf("Enter the width: ");
    scanf("%i", &user_width);

    half_diamond(user_width);

    return 0;
}

void half_diamond(unsigned int width)
{
    unsigned int width_index = 0;
    unsigned int number_index = 0;
    unsigned int number = 1;

    for (width_index = 1; width_index <= width; width_index++)
    {
        for (number_index = 1; number_index <= width_index; number_index++)
        {
            if (number_index > 1)
            {
                printf("*");
            }
            else
            {}
            printf("%i", number);
            number++;
        }
        printf("\n");
    }
    for (width_index = width; width_index >= 1; width_index--)
    {
        number -= width_index;
        for (number_index = 1; number_index <= width_index; number_index++)
        {
            if (number_index > 1)
            {
                printf("*");
            }
            else
            {}
            printf("%i", number + number_index - 1);
        }
        printf("\n");
    }
}