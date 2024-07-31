#include <stdio.h>
#include <string.h>

signed int my_memcmp(const void *first_string, const void *second_string, unsigned int number);

int main(void)
{
    unsigned char test_first_string[] = "Embedded Systems Diploma 1";
    unsigned char test_second_string[] = "Embedded Systems Diploma 2";
    unsigned int test_number = strlen(test_second_string);
    signed int result = 0;

    result = my_memcmp(test_first_string, test_second_string, test_number);

    if (result < 0)
    {
        printf("String 1 is less than String 2.\n");
    }
    else if (result > 0)
    {
        printf("String 2 is less than String 1.\n");
    }
    else
    {
        printf("String 1 is equal to String 2.\n");
    }

    return 0;
}

signed int my_memcmp(const void *first_string, const void *second_string, unsigned int number)
{
    const unsigned char *temp_first_pointer = (const unsigned char *) first_string;
    const unsigned char *temp_second_pointer = (const unsigned char *) second_string;
    signed int return_value = 0;

    if ((NULL == temp_first_pointer) || (NULL == temp_second_pointer))
    {
        printf("my_memcmp function has failed due to passing a null pointer.\n");
    }
    else
    {
        if (temp_first_pointer == temp_second_pointer)
        {
            return_value = 0;
        }
        else
        {
            while (number--)
            {
                if (*temp_first_pointer != *temp_second_pointer)
                {
                    return_value = (*temp_first_pointer < *temp_second_pointer) ? -1 : 1;
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
