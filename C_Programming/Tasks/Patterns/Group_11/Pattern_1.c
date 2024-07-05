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

    for (diagonal_index = 1; diagonal_index <= diagonal; diagonal_index++)
    {
        for (asterisk_index = 1; asterisk_index <= diagonal; asterisk_index++)
        {
            if ((1 == diagonal_index) || (diagonal_index == diagonal) || (1 == asterisk_index) || 
                (asterisk_index == diagonal) || (asterisk_index == diagonal_index) || (asterisk_index == diagonal - diagonal_index + 1))
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