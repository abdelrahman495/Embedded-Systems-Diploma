#include <stdio.h>

void half_diamond(unsigned int number, unsigned int width);

int main(void)
{
    unsigned int user_number = 0;
    unsigned int user_width = 0;

    printf("Enter the number and the width: ");
    scanf("%i %i", &user_number, &user_width);

    half_diamond(user_number, user_width);

    return 0;
}

void half_diamond(unsigned int number, unsigned int width)
{
    unsigned int width_index = 0;
    unsigned int number_index = 0;

    for (width_index = 1; width_index <= width; width_index++)
    {
        for (number_index = 1; number_index <= width_index; number_index++)
        {
            printf("%i", number);
        }
        printf("\n");
        number++;
    }
    number--;
    for (width_index = width - 1; width_index >= 1; width_index--)
    {
        number--;
        for (number_index = 1; number_index <= width_index; number_index++)
        {
            printf("%i", number);
        }
        printf("\n");
    }
}