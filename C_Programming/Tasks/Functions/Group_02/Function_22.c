#include <stdio.h>

#define MAX_ARRAY_SIZE 100

void print_array_elements(signed int array[], unsigned int size, unsigned int array_index);

int main(void)
{
    signed int user_array[MAX_ARRAY_SIZE] = {0};
    unsigned int user_size = 0;
    unsigned int user_array_index = 0;

    printf("Input size: ");
    scanf("%i", &user_size);

    printf("Input elements: ");
    for (user_array_index = 0; user_array_index < user_size; user_array_index++)
    {
        scanf("%d", &user_array[user_array_index]);
    }

    printf("Array elements: ");
    print_array_elements(user_array, user_size, 0);

    return 0;
}

void print_array_elements(signed int array[], unsigned int size, unsigned int array_index)
{
    if (array_index == size - 1)
    {
        printf("%d\n", array[array_index]);
    }
    else
    {
        printf("%d, ", array[array_index]);
        print_array_elements(array, size, array_index + 1);
    }
}