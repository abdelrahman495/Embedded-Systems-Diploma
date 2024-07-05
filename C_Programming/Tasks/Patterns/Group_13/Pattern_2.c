#include <stdio.h>

void left_arrow(unsigned int size);

int main(void)
{
    unsigned int user_size = 0;

    printf("Enter the size: ");
    scanf("%i", &user_size);

    left_arrow(user_size);

    return 0;
}

void left_arrow(unsigned int size)
{
    unsigned int size_index = 0;
    unsigned int asterisk_index = 0;
    unsigned int space_index = 0;
    unsigned int center = (size + 1) / 2;

    for (size_index = 1; size_index <= center; size_index++)
    {
        for (space_index = 1; space_index <= center - size_index; space_index++)
        {
            printf("  ");
        }
        for (asterisk_index = 1; asterisk_index <= 2 * size_index - 1; asterisk_index++)
        {
            if ((1 == size_index) || (size_index == center) || (1 == asterisk_index))
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
    for (size_index = center - 1; size_index >= 1; size_index--)
    {
        for (space_index = 1; space_index <= center - size_index; space_index++)
        {
            printf("  ");
        }
        for (asterisk_index = 1; asterisk_index <= 2 * size_index - 1; asterisk_index++)
        {
            if ((1 == size_index) || (1 == asterisk_index))
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