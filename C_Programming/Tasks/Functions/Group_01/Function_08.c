#include <stdio.h>

#define MAX_ARRAY_SIZE 100

signed int find_largest(signed int array[], unsigned int size);

int main(void)
{
    signed int user_array[MAX_ARRAY_SIZE] = {0};
    unsigned int user_size = 0;
    unsigned int user_array_index = 0;
    signed int largest_element = 0;
    
    printf("Input the number of elements to be stored in the array: ");
    scanf("%i", &user_size);

    printf("Input %i elements in the array:\n", user_size);
    for (user_array_index = 0; user_array_index < user_size; user_array_index++)
    {
        printf("Element - %i: ", user_array_index);
        scanf("%d", &user_array[user_array_index]);
    }

    largest_element = find_largest(user_array, user_size);

    printf("The largest element in the array is: %d\n", largest_element);

    return 0;
}

signed int find_largest(signed int array[], unsigned int size)
{
    unsigned int array_index = 0;
    signed int largest = array[0];

    for (array_index = 0; array_index < size; array_index++)
    {
        if (array[array_index] > largest)
        {
            largest = array[array_index];
        }
        else
        {}
    }

    return largest;
}