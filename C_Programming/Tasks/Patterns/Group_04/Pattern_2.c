#include <stdio.h>

void palindrome_half_pyramid(unsigned int height);

int main(void)
{
    unsigned int user_height = 0;

    printf("Enter the height: ");
    scanf("%i", &user_height);

    palindrome_half_pyramid(user_height);

    return 0;
}

void palindrome_half_pyramid(unsigned int height)
{
    unsigned int height_index = 0;
    unsigned char letter_index = 0;

    for (height_index = 1; height_index <= height; height_index++)
    {
        for (letter_index = 'A'; letter_index <= height_index + 'A' - 1; letter_index++)
        {
            printf("%c ", letter_index);
        }
        for (letter_index = height_index + 'A' - 2; letter_index >= 'A'; letter_index--)
        {
            printf("%c ", letter_index);
        }
        printf("\n");
    }
}