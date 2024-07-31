#include <stdio.h>

unsigned int my_strspn(const unsigned char *first_string, const unsigned char *second_string);

int main(void)
{
    unsigned char test_first_string[] = "Embedded Systems Diploma";
    unsigned char test_second_string[] = "Embedded";
    unsigned int result = 0;

    result = my_strspn(test_first_string, test_second_string);
    printf("Length of the matching initial segment = %i\n", result);

    return 0;
}

unsigned int my_strspn(const unsigned char *first_string, const unsigned char *second_string)
{
    const unsigned char *temp_pointer = NULL;
    unsigned char matching = 0;
    unsigned int return_value = 0;

    if ((NULL == first_string) || (NULL == second_string))
    {
        printf("my_strspn function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (*first_string != '\0')
        {
            temp_pointer = second_string;
            matching = 0;
            while (*temp_pointer != '\0')
            {
                if (*first_string == *temp_pointer)
                {
                    matching = 1;
                    break;
                }
                else
                {
                    temp_pointer++;
                }
            }
            if (1 == matching)
            {
                return_value++;
                first_string++;
            }
            else
            {
                break;
            }
        }
    }

    return return_value;
}
