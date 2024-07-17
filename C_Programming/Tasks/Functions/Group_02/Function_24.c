#include <stdio.h>

#define MAX_ARRAY_SIZE 100

signed int find_maximum_element(signed int array[], unsigned int size, unsigned int array_index);
signed int find_minimum_element(signed int array[], unsigned int size, unsigned int array_index);

int main(void)
{
    signed int user_array[MAX_ARRAY_SIZE] = {0};
    unsigned int user_size = 0;
    unsigned int user_array_index = 0;

    printf("Size of array: ");
    scanf("%i", &user_size);

    printf("Elements in array: ");
    for (user_array_index = 0; user_array_index < user_size; user_array_index++)
    {
        scanf("%d", &user_array[user_array_index]);
    }

    printf("Maximum element = %d\n", find_maximum_element(user_array, user_size, 0));
    printf("Minimum element = %d\n", find_minimum_element(user_array, user_size, 0));

    return 0;
}

signed int find_maximum_element(signed int array[], unsigned int size, unsigned int array_index)
{
    signed int maximum = array[array_index];
    signed int return_value = 0;

    if (array_index == size - 2)
    {
        return_value = (array[array_index] > array[array_index + 1]) ? array[array_index] : array[array_index + 1];
    }
    else
    {
        maximum = find_maximum_element(array, size, array_index + 1);

        return_value = (array[array_index] > maximum) ? array[array_index] : maximum;
    }

    return return_value;
}

signed int find_minimum_element(signed int array[], unsigned int size, unsigned int array_index)
{
    signed int minimum = array[array_index];
    signed int return_value = 0;

    if (array_index == size - 2)
    {
        return_value = (array[array_index] < array[array_index + 1]) ? array[array_index] : array[array_index + 1];
    }
    else
    {
        minimum = find_minimum_element(array, size, array_index + 1);

        return_value = (array[array_index] < minimum) ? array[array_index] : minimum;
    }

    return return_value;
}