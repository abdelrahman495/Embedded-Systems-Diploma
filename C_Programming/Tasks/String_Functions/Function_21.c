#include <stdio.h>

unsigned char *my_strtok(unsigned char *string, const unsigned char *delimiter);

int main(void)
{
    unsigned char test_string[] = "This is - www.tutorialspoint.com - website";
    unsigned char test_delimiter[] = "-";
    unsigned char *token = NULL;

    token = my_strtok(test_string, test_delimiter);

    printf("%s\n", token);
    /*
    while (NULL != token)
    {
        printf("\"%s\"\n", token);

        token = my_strtok(NULL, test_delimiter);
    }
    */
    return 0;
}

unsigned char *my_strtok(unsigned char *string, const unsigned char *delimiter)
{
    unsigned char *temp_first_pointer = string;
    const unsigned char *temp_second_pointer = delimiter;

    if (NULL == temp_second_pointer)
    {
        printf("my_strtok function has failed due to passing a null pointer.\n");
    }
    else if (NULL == temp_first_pointer)
    {
        // To do
    }
    else
    {
        while (*temp_first_pointer != '\0')
        {
            if (*temp_first_pointer == *temp_second_pointer)
            {
                *temp_first_pointer = '\0';
                temp_first_pointer = string;
                break;
            }
            else
            {
                temp_first_pointer++;
            }
        }
    }

    return temp_first_pointer;
}
