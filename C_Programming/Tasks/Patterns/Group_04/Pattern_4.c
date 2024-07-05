#include <stdio.h>

void palindrome_full_pyramid(unsigned int height);

int main(void)
{
    unsigned int user_height = 0;

    printf("Enter the height: ");
    scanf("%i", &user_height);

    palindrome_full_pyramid(user_height);

    return 0;
}

void palindrome_full_pyramid(unsigned int height)
{
    unsigned int height_index = 0;
    unsigned int number_index = 0;
    unsigned int asterisk_index = 0;

    for (height_index = 1; height_index <= height; height_index++)
    {
        for (asterisk_index = 1; asterisk_index <= height - height_index; asterisk_index++)
        {
            printf("*");
        }
        for (number_index = 1; number_index <= height_index; number_index++)
        {
            if (number_index != height_index)
            {
                printf("%i*", height_index);
            }
            else
            {
                printf("%i", height_index);
            }
        }
        for (asterisk_index = 1; asterisk_index <= height - height_index; asterisk_index++)
        {
            printf("*");
        }
        printf("\n");
    }
}