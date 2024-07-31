#include <stdio.h>

#define MAX_ARRAY_SIZE 100

unsigned char *my_strncpy(unsigned char *destination, const unsigned char *source, unsigned int number);

int main(void)
{
    unsigned char test_destination[MAX_ARRAY_SIZE] = {0};
    unsigned char test_source[MAX_ARRAY_SIZE] = "Embedded Systems Diploma";
    unsigned int test_number = 16;

    printf("Destination string before my_strncpy(): \"%s\"\n", test_destination);
    my_strncpy(test_destination, test_source, test_number);
    printf("Destination string after my_strncpy(): \"%s\"\n", test_destination);

    return 0;
}

unsigned char *my_strncpy(unsigned char *destination, const unsigned char *source, unsigned int number)
{
    unsigned char *temp_dest_pointer = destination;
    const unsigned char *temp_src_pointer = source;

    if ((NULL == temp_dest_pointer) || (NULL == temp_src_pointer))
    {
        printf("my_strncpy function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (number--)
        {
            *temp_dest_pointer++ = *temp_src_pointer++;
        }
        *temp_dest_pointer = '\0';
    }

    return destination;
}
