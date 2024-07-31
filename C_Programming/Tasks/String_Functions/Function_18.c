#include <stdio.h>

unsigned char *my_strrchr(const unsigned char *string, signed int character);

int main(void)
{
    unsigned char test_string[] = "Embedded Systems Diploma";
    unsigned char test_character = 'm';
    unsigned char *character_address = NULL;

    character_address = my_strrchr(test_string, test_character);

    if (NULL == character_address)
    {
        printf("The character does not occur in the given string.\n");
    }
    else
    {
        printf("The last occurrence of character: '%c' is at index: %i\n", test_character, character_address - test_string);
    }

    return 0;
}

unsigned char *my_strrchr(const unsigned char *string, signed int character)
{
    unsigned char *return_address = NULL;

    if (NULL == string)
    {
        printf("my_strrchr function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (*string != '\0')
        {
            if (*string == (unsigned char) character)
            {
                return_address = (unsigned char *) string;
            }
            else
            {
                /* Do nothing */
            }
            string++;
        }
    }
    
    return return_address;
}
