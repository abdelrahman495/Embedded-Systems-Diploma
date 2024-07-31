#include <stdio.h>
#include <string.h>
#include <errno.h>

unsigned char *my_strerror(signed int error_number);

int main(void)
{
    signed int test_error_number = 0;
    unsigned char *error_string = NULL;
    
    error_string = my_strerror(test_error_number);

    if (NULL == error_string)
    {
        printf("my_strerror() returned a NULL pointer.\n");
    }
    else
    {
        printf("Error: %s\n", error_string);
    }

    return 0;
}

unsigned char *my_strerror(signed int error_number)
{
    // To do
}
