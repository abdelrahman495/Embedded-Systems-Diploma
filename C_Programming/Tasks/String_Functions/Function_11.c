#include <stdio.h>

signed int my_strcoll(const unsigned char *first_string, const unsigned char *second_string);

int main(void)
{
    unsigned char test_first_string[] = "Embedded Systems Diploma";
    unsigned char test_second_string[] = "embedded systems diploma";
    signed int result = 0;

    result = my_strcoll(test_first_string, test_second_string);
    printf("Result = %i\n", result);

    return 0;
}

signed int my_strcoll(const unsigned char *first_string, const unsigned char *second_string)
{
    const unsigned char *temp_first_pointer = first_string;
    const unsigned char *temp_second_pointer = second_string;
    unsigned int length = 0;
    signed int return_value = 0;

    if ((NULL == temp_first_pointer) || (NULL == temp_second_pointer))
    {
        printf("my_strcoll function has failed due to passing a null pointer.\n");
    }
    else
    {
        if (temp_first_pointer == temp_second_pointer)
        {
            return_value = 0;
        }
        else
        {
            while (1)
            {
                if ((*temp_first_pointer != '\0') && (*temp_second_pointer != '\0'))
                {
                    length++;
                    temp_first_pointer++;
                    temp_second_pointer++;
                }
                else
                {
                    length++;
                    temp_first_pointer = first_string;
                    temp_second_pointer = second_string;
                    break;
                }
            }
            while (length--)
            {
                if (*temp_first_pointer != *temp_second_pointer)
                {
                    return_value = *temp_first_pointer - *temp_second_pointer;
                    break;
                }
                else
                {
                    temp_first_pointer++;
                    temp_second_pointer++;
                }
            }
        }
    }

    return return_value;
}
