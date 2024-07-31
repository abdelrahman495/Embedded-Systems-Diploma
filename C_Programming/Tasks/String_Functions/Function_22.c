#include <stdio.h>

#define MAX_ARRAY_SIZE 100

unsigned int my_strxfrm(unsigned char *destination, const unsigned char *source, unsigned int number);

int main(void)
{
    unsigned char test_destination[MAX_ARRAY_SIZE] = {0};
    unsigned char test_source[MAX_ARRAY_SIZE] = "Embedded Systems Diploma";
    unsigned int test_number = 8;
    unsigned int length = 0;

    length = my_strxfrm(test_destination, test_source, test_number);
    printf("Length of the transformed string: %i\n", length);
    printf("Destination string: \"%s\"\n", test_destination);
    printf("Source string: \"%s\"\n", test_source);

    return 0;
}

unsigned int my_strxfrm(unsigned char *destination, const unsigned char *source, unsigned int number)
{
    unsigned char *temp_first_pointer = destination;
    const unsigned char *temp_second_pointer = source;
    unsigned int return_value = 0;

    if ((NULL == temp_first_pointer) || (NULL == temp_second_pointer))
    {
        printf("my_strxfrm function has failed due to passing a null pointer.\n");
    }
    else
    {
        if (0 == number)
        {
            destination = NULL;
        }
        else
        {
            while (number--)
            {
                *temp_first_pointer++ = *temp_second_pointer++;
            }
            temp_second_pointer = source;
        }
        while (*temp_second_pointer != '\0')
        {
            return_value++;
            temp_second_pointer++;
        }
    }

    return return_value;
}
