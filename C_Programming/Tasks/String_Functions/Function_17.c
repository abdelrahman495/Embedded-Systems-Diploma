#include <stdio.h>

unsigned char *my_strpbrk(const unsigned char *first_string, const unsigned char *second_string);

int main(void)
{
    unsigned char test_first_string[] = "Embedded Systems Diploma";
    unsigned char test_second_string[] = "Diploma";
    unsigned char *character_address = NULL;

    character_address = my_strpbrk(test_first_string, test_second_string);

    if (NULL == character_address)
    {
        printf("No character in the first string matches one of the characters in the second string.\n");
    }
    else
    {
        printf("The first matching character is '%c', and its index is: %i\n", *character_address, character_address - test_first_string);
    }

    return 0;
}

unsigned char *my_strpbrk(const unsigned char *first_string, const unsigned char *second_string)
{
    const unsigned char *temp_first_pointer = first_string;
    const unsigned char *temp_second_pointer = second_string;
    unsigned char matching = 0;
    unsigned char *return_address = NULL;

    if ((NULL == temp_first_pointer) || (NULL == temp_second_pointer))
    {
        printf("my_strpbrk function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (*temp_first_pointer != '\0')
        {
            while (*temp_second_pointer != '\0')
            {
                if (*temp_first_pointer == *temp_second_pointer)
                {
                    matching = 1;
                    break;
                }
                else
                {
                    temp_second_pointer++;
                }
            }
            if (matching == 0)
            {
                temp_first_pointer++;
                temp_second_pointer = second_string;
            }
            else
            {
                return_address = (unsigned char *) temp_first_pointer;
                break;
            }
        }
    }

    return return_address;
}
