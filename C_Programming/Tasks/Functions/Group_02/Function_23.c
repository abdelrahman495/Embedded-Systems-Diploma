#include <stdio.h>

#define MAX_ARRAY_SIZE 100

signed int sum_of_array_elements(signed int array[], unsigned int size, unsigned int array_index);

int main(void)
{
    signed int user_array[MAX_ARRAY_SIZE] = {0};
    unsigned int user_size = 0;
    unsigned int user_array_index = 0;

    printf("Input size of array: ");
    scanf("%i", &user_size);

    printf("Input array elements: ");
    for (user_array_index = 0; user_array_index < user_size; user_array_index++)
    {
        scanf("%d", &user_array[user_array_index]);
    }

    printf("Sum of array: %d\n", sum_of_array_elements(user_array, user_size, 0));

    return 0;
}

signed int sum_of_array_elements(signed int array[], unsigned int size, unsigned int array_index)
{
    signed int return_value = 0;

    return_value = (array_index == size) ? 0 : array[array_index] + sum_of_array_elements(array, size, array_index + 1);

    return return_value;
}