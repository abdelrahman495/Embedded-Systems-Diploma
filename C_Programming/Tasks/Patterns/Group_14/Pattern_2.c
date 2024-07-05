#include <stdio.h>

void hollow_rhombus(unsigned int size);

int main(void)
{
    unsigned int user_size = 0;

    printf("Enter the size: ");
    scanf("%i", &user_size);

    hollow_rhombus(user_size);

    return 0;
}

void hollow_rhombus(unsigned int size)
{
    unsigned int size_index = 0;
    unsigned int asterisk_index = 0;
    unsigned int space_index = 0;

    for (size_index = 1; size_index <= size; size_index++)
    {
        for (space_index = 1; space_index <= size - size_index; space_index++)
        {
            printf("  ");
        }
        for (asterisk_index = 1; asterisk_index <= size; asterisk_index++)
        {
            if ((1 == size_index) || (size_index == size) || (1 == asterisk_index) || (asterisk_index == size))
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