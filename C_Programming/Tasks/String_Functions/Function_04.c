#include <stdio.h>
#include <string.h>

#define MAX_ARRAY_SIZE 100

void *my_memmove(void *destination, const void *source, unsigned int number);

int main(void)
{
    unsigned char test_destination[MAX_ARRAY_SIZE] = {0};
    unsigned char test_source[MAX_ARRAY_SIZE] = "Embedded Systems Diploma";
    unsigned int test_number = strlen(test_source);

    printf("Destination string before my_memmove(): \"%s\"\n", test_destination);
    my_memmove(test_destination, test_source, test_number);
    printf("Destination string after my_memmove(): \"%s\"\n", test_destination);

    return 0;
}

void *my_memmove(void *destination, const void *source, unsigned int number)
{
    unsigned char *temp_dest_pointer = (unsigned char *) destination;
    const unsigned char *temp_src_pointer = (const unsigned char *) source;

    if ((NULL == temp_dest_pointer) || (NULL == temp_src_pointer))
    {
        printf("my_memmove function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (number--)
        {
            *temp_dest_pointer++ = *temp_src_pointer++;
        }
    }

    return destination;
}

/*
Note: memcpy & memmove do the same functionality except that memmove handles overlapping between destination and source memory blocks.
To do: implement that difference.
*/
