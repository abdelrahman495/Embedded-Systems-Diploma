#include <stdio.h>

void *my_memset(void *string, signed int character, unsigned int number);

int main(void)
{
    unsigned char test_string[] = "************************";
    unsigned char test_character = '&';
    unsigned int test_number = 12;

    printf("String before my_memset(): \"%s\"\n", test_string);
    my_memset(test_string, test_character, test_number);
    printf("String after my_memset():  \"%s\"\n", test_string);

    return 0;
}

void *my_memset(void *string, signed int character, unsigned int number)
{
    unsigned char *temp_pointer = (unsigned char *) string;

    if (NULL == temp_pointer)
    {
        printf("my_memset function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (number--)
        {
            *temp_pointer++ = (unsigned char) character;
        }
    }

    return string;
}
