#include <stdio.h>

unsigned char *my_strncat(unsigned char *destination, const unsigned char *source, unsigned int number);

int main(void)
{
    unsigned char test_destination[] = "Embedded ";
    unsigned char test_source[] = "Systems Diploma";
    unsigned int test_number = 7;

    printf("Destination string before my_strncat(): \"%s\"\n", test_destination);
    my_strncat(test_destination, test_source, test_number);
    printf("Destination string after my_strncat(): \"%s\"\n", test_destination);

    return 0;
}

unsigned char *my_strncat(unsigned char *destination, const unsigned char *source, unsigned int number)
{
    unsigned char *temp_dest_pointer = destination;
    const unsigned char *temp_src_pointer = source;

    if ((NULL == temp_dest_pointer) || (NULL == temp_src_pointer))
    {
        printf("my_strncat function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (*temp_dest_pointer != '\0')
        {
            temp_dest_pointer++;
        }
        while (number--)
        {
            *temp_dest_pointer++ = *temp_src_pointer++;
        }
        *temp_dest_pointer = '\0';
    }

    return destination;
}
