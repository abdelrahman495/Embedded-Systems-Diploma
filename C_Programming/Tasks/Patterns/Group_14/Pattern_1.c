#include <stdio.h>

void solid_rhombus(unsigned int size);

int main(void)
{
    unsigned int user_size = 0;

    printf("Enter the size: ");
    scanf("%i", &user_size);

    solid_rhombus(user_size);

    return 0;
}

void solid_rhombus(unsigned int size)
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
            printf("* ");
        }
        printf("\n");
    }
}