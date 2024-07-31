#include <stdio.h>

unsigned int my_strcspn(const unsigned char *first_string, const unsigned char *second_string);

int main(void)
{
    unsigned char test_first_string[] = "Tutorialspoint";
    unsigned char test_second_string[] = "Textbook";
    unsigned int result = 0;

    result = my_strcspn(test_first_string, test_second_string);
    printf("The length of the initial segment of the first string that doesn't contain any characters from the second string is = %i\n", result);

    return 0;
}

unsigned int my_strcspn(const unsigned char *first_string, const unsigned char *second_string)
{
    const unsigned char *temp_first_pointer = first_string;
    const unsigned char *temp_second_pointer = second_string;
    unsigned int first_length = 0, second_length = 0;
    unsigned int first_index = 0, second_index = 0;
    unsigned char matching = 0;
    unsigned int return_value = 0;

    if ((NULL == temp_first_pointer) || (NULL == temp_second_pointer))
    {
        printf("my_strcspn function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (*temp_first_pointer != '\0')
        {
            first_length++;
            temp_first_pointer++;
        }
        temp_first_pointer = first_string;
        while (*temp_second_pointer != '\0')
        {
            second_length++;
            temp_second_pointer++;
        }
        temp_second_pointer = second_string;
        for (first_index = 0; first_index < first_length; first_index++)
        {
            matching = 0;
            for (second_index = 0; second_index < second_length; second_index++)
            {
                if (temp_first_pointer[first_index] == temp_second_pointer[second_index])
                {
                    matching = 1;
                    break;
                }
                else
                {
                    /* Do nothing */
                }
            }
            if (matching == 0)
            {
                return_value++;
            }
            else
            {
                break;
            }
        }
    }

    return return_value;
}
