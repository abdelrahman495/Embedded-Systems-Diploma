#include <stdio.h>

unsigned int my_strlen(const unsigned char *string);

int main(void)
{
    unsigned char test_string[] = "Embedded Systems Diploma";
    
    printf("Length of string = %i\n", my_strlen(test_string));

    return 0;
}

unsigned int my_strlen(const unsigned char *string)
{
    unsigned int return_value = 0;

    if (NULL == string)
    {
        printf("my_strlen function has failed due to passing a null pointer.\n");
    }
    else
    {
        while (*string != '\0')
        {
            return_value++;
            string++;
        }
    }

    return return_value;
}
