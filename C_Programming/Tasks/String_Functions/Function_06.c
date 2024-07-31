#include <stdio.h>

unsigned char *my_strcat(unsigned char *destination, const unsigned char *source);

int main(void)
{
    unsigned char test_destination[] = "Embedded ";
    unsigned char test_source[] = "Systems";

    printf("Destination string before my_strcat(): \"%s\"\n", test_destination);
    my_strcat(test_destination, test_source);
    printf("Destination string after my_strcat(): \"%s\"\n", test_destination);

    return 0;
}

unsigned char *my_strcat(unsigned char *destination, const unsigned char *source)
{
    unsigned char *temp_dest_pointer = destination;
    const unsigned char *temp_src_pointer = source;
    unsigned int length = 0;

    if ((NULL == temp_dest_pointer) || (NULL == temp_src_pointer))
    {
        printf("my_strcat function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (*temp_dest_pointer != '\0')
        {
            temp_dest_pointer++;
        }
        while (*temp_src_pointer != '\0')
        {
            length++;
            temp_src_pointer++;
        }
        temp_src_pointer = source;
        while (length--)
        {
            *temp_dest_pointer++ = *temp_src_pointer++;
        }
        *temp_dest_pointer = '\0';
    }

    return destination;
}
