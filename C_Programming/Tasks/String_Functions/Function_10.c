#include <stdio.h>
#include <string.h>

signed int my_strncmp(const unsigned char *first_string, const unsigned char *second_string, unsigned int number);

int main(void)
{
    unsigned char test_first_string[] = "Embedded Systems Diploma 1";
    unsigned char test_second_string[] = "Embedded Systems Diploma 2";
    unsigned int test_number = strlen(test_second_string);
    signed int result = 0;

    result = my_strncmp(test_first_string, test_second_string, test_number);

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

signed int my_strncmp(const unsigned char *first_string, const unsigned char *second_string, unsigned int number)
{
    signed int return_value = 0;

    if ((NULL == first_string) || (NULL == second_string))
    {
        printf("my_strncmp function has failed due to passing a null pointer.\n");
    }
    else
    {
        if (first_string == second_string)
        {
            return_value = 0;
        }
        else
        {
            while (number--)
            {
                if (*first_string != *second_string)
                {
                    return_value = (*first_string < *second_string) ? -1 : 1;
                    break;
                }
                else
                {
                    first_string++;
                    second_string++;
                }
            }
        }
    }

    return return_value;
}
