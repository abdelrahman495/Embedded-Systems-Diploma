#include <stdio.h>

#define MAX_ARRAY_SIZE 100

void find_min_and_max(unsigned int array[], unsigned int size, unsigned int *min_ptr, unsigned int *max_ptr);

int main(void)
{
    unsigned int user_values[MAX_ARRAY_SIZE] = {0};
    unsigned int user_number = 0;
    unsigned int array_index = 0;
    unsigned int minimum_value = 0;
    unsigned int maximum_value = 0;

    printf("Number of values you want to input: ");
    scanf("%i", &user_number);

    printf("Input %i values\n", user_number);
    for (array_index = 0; array_index < user_number; array_index++)
    {
        scanf("%i", &user_values[array_index]);
    }

    find_min_and_max(user_values, user_number, &minimum_value, &maximum_value);

    printf("Minimum value is: %i\n", minimum_value);
    printf("Maximum value is: %i\n", maximum_value);

    return 0;
}

void find_min_and_max(unsigned int array[], unsigned int size, unsigned int *min_ptr, unsigned int *max_ptr)
{
    unsigned int index = 0;

    *min_ptr = array[0];
    *max_ptr = array[0];

    for (index = 0; index < size; index++)
    {
        if (array[index] < *min_ptr)
        {
            *min_ptr = array[index];
        }
        else
        {}
        if (array[index] > *max_ptr)
        {
            *max_ptr = array[index];
        }
        else
        {}
    }
}