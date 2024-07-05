#include <stdio.h>

void pascal_triangle(unsigned int height);

int main(void)
{
    unsigned int user_height = 0;

    printf("Enter the height: ");
    scanf("%i", &user_height);

    pascal_triangle(user_height);

    return 0;
}

void pascal_triangle(unsigned int height)
{
    unsigned int height_index = 0;
    unsigned int number_index = 0;
    unsigned int space_index = 0;
    unsigned int coefficient = 0;

    for (height_index = 1; height_index <= height; height_index++)
    {
        for (space_index = 1; space_index <= height - height_index; space_index++)
        {
            printf(" ");
        }
        for (number_index = 1; number_index <= height_index; number_index++)
        {
            if ((1 == height_index) || (1 == number_index))
            {
                coefficient = 1;
            }
            else
            {
                coefficient = coefficient * (height_index - number_index + 1) / (number_index - 1);
            }
            printf("%i ", coefficient);
        }
        printf("\n");
    }
}