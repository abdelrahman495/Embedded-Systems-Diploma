#include <stdio.h>
#include <string.h>

void *my_memchr(const void *string, signed int character, unsigned int number);

int main(void)
{
    unsigned char test_string[] = "Embedded Systems Diploma";
    unsigned char test_character = 'E';
    unsigned int test_number = strlen(test_string);
    unsigned char *character_address = NULL;

    character_address = (unsigned char *) my_memchr(test_string, test_character, test_number);

    if (NULL == character_address)
    {
        printf("The character does not occur in the given memory area.\n", test_character);
    }
    else
    {
        printf("'%c' found at position %i\n", test_character, character_address - test_string);
    }

    return 0;
}

void *my_memchr(const void *string, signed int character, unsigned int number)
{
    const unsigned char *temp_pointer = (const unsigned char *) string;
    void *return_address = NULL;

    if (NULL == temp_pointer)
    {
        printf("my_memchr function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (number--)
        {
            if (*temp_pointer == (unsigned char) character)
            {
                return_address = (void *) temp_pointer;
                break;
            }
            else
            {
                temp_pointer++;
            }
        }
    }

    return return_address;
}
