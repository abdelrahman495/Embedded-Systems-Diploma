#include <stdio.h>

void floyd_triangle(unsigned int height);

int main(void)
{
    unsigned int user_height = 0;

    printf("Enter the height: ");
    scanf("%i", &user_height);

    floyd_triangle(user_height);

    return 0;
}

void floyd_triangle(unsigned int height)
{
    unsigned int height_index = 0;
    unsigned int number_index = 0;
    unsigned int number = 0;

    for (height_index = 1; height_index <= height; height_index++)
    {
        for (number_index = 1; number_index <= height_index; number_index++)
        {
            printf("%i ", ++number);
        }
        printf("\n");
    }
}