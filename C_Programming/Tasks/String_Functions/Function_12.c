#include <stdio.h>

#define MAX_ARRAY_SIZE 100

unsigned char *my_strcpy(unsigned char *destination, const unsigned char *source);

int main(void)
{
    unsigned char test_destination[MAX_ARRAY_SIZE] = {0};
    unsigned char test_source[MAX_ARRAY_SIZE] = "Embedded Systems Diploma";

    printf("Destination string before my_strcpy(): \"%s\"\n", test_destination);
    my_strcpy(test_destination, test_source);
    printf("Destination string after my_strcpy(): \"%s\"\n", test_destination);

    return 0;
}

unsigned char *my_strcpy(unsigned char *destination, const unsigned char *source)
{
    unsigned char *temp_dest_pointer = destination;
    const unsigned char *temp_src_pointer = source;

    if ((NULL == temp_dest_pointer) || (NULL == temp_src_pointer))
    {
        printf("my_strcpy function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (*temp_src_pointer != '\0')
        {
            *temp_dest_pointer++ = *temp_src_pointer++;
        }
        *temp_dest_pointer = '\0';
    }

    return destination;
}
