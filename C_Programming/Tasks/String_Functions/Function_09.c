#include <stdio.h>

signed int my_strcmp(const unsigned char *first_string, const unsigned char *second_string);

int main(void)
{
    unsigned char test_first_string[] = "Embedded Systems Diploma 1";
    unsigned char test_second_string[] = "Embedded Systems Diploma 2";
    signed int result = 0;

    result = my_strcmp(test_first_string, test_second_string);

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

signed int my_strcmp(const unsigned char *first_string, const unsigned char *second_string)
{
    signed int return_value = 0;

    if ((NULL == first_string) || (NULL == second_string))
    {
        printf("my_strcmp function has failed due to passing a null pointer.\n");
    }
    else
    {
        if (first_string == second_string)
        {
            return_value = 0;
        }
        else
        {
            while ((*first_string != '\0') && (*second_string != '\0'))
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
