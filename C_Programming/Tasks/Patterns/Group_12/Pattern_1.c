#include <stdio.h>

void diagonal_and_sides(unsigned int diagonal);

int main(void)
{
    unsigned int user_diagonal = 0;

    printf("Enter the diagonal: ");
    scanf("%i", &user_diagonal);

    diagonal_and_sides(user_diagonal);

    return 0;
}

void diagonal_and_sides(unsigned int diagonal)
{
    unsigned int diagonal_index = 0;
    unsigned int asterisk_index = 0;
    unsigned int space_index = 0;
    unsigned int center = (diagonal + 1) / 2;

    for (diagonal_index = 1; diagonal_index <= center; diagonal_index++)
    {
        for (space_index = 1; space_index <= center - diagonal_index; space_index++)
        {
            printf("  ");
        }
        for (asterisk_index = 1; asterisk_index <= 2 * diagonal_index - 1; asterisk_index++)
        {
            if ((1 == diagonal_index) || (diagonal_index == center) || 
                (1 == asterisk_index) || (asterisk_index == 2 * diagonal_index - 1) || (asterisk_index == diagonal_index))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (diagonal_index = center - 1; diagonal_index >= 1; diagonal_index--)
    {
        for (space_index = 1; space_index <= center - diagonal_index; space_index++)
        {
            printf("  ");
        }
        for (asterisk_index = 1; asterisk_index <= 2 * diagonal_index - 1; asterisk_index++)
        {
            if ((1 == diagonal_index) || (1 == asterisk_index) || 
                (asterisk_index == 2 * diagonal_index - 1) || (asterisk_index == diagonal_index))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}