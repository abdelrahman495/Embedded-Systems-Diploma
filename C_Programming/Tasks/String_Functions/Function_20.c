#include <stdio.h>

unsigned char *my_strstr(const unsigned char *first_string, const unsigned char *second_string);

int main(void)
{
    unsigned char test_first_string[] = "Embedded Systems Diploma";
    unsigned char test_second_string[] = "Diploma";
    unsigned char *start_address = NULL;

    start_address = my_strstr(test_first_string, test_second_string);
    
    if (NULL == start_address)
    {
        printf("Second string is not found in first string.\n");
    }
    else
    {
        printf("\"%s\" is present in \"%s\" at index: %i\n", test_second_string, test_first_string, start_address - test_first_string);
    }

    return 0;
}

unsigned char *my_strstr(const unsigned char *first_string, const unsigned char *second_string)
{
    const unsigned char *temp_first_pointer = first_string;
    const unsigned char *temp_second_pointer = second_string;
    unsigned int length = 0, matching = 0;
    unsigned char *return_address = NULL;

    if ((NULL == temp_first_pointer) || (NULL == temp_second_pointer))
    {
        printf("my_strstr function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (*temp_second_pointer != '\0')
        {
            length++;
            temp_second_pointer++;
        }
        temp_second_pointer = second_string;
        while ((*temp_first_pointer != '\0') && (*temp_second_pointer != '\0'))
        {
            if (*temp_first_pointer == *temp_second_pointer)
            {
                matching++;
                temp_second_pointer++;
            }
            else
            {
                matching = 0;
                temp_second_pointer = second_string;
            }
            temp_first_pointer++;
        }
        if (matching == length)
        {
            return_address = (unsigned char *) temp_first_pointer - length;
        }
        else
        {
            /* Do nothing */
        }
    }

    return return_address;
}
