#include <stdio.h>
#include <string.h>

#define MAX_ARRAY_SIZE 100

unsigned int are_anagram(unsigned char first_string[], unsigned int first_string_size, 
                        unsigned char second_string[], unsigned int second_string_size);

int main(void)
{
    unsigned char user_first_string[MAX_ARRAY_SIZE] = {0};
    unsigned char user_second_string[MAX_ARRAY_SIZE] = {0};
    unsigned int anagram = 0;

    printf("Input the first string: ");
    /*
    scanf("%s", user_first_string);
    */
    gets(user_first_string);

    printf("Input the second string: ");
    /*
    scanf("%s", user_second_string);
    */
    gets(user_second_string);

    anagram = are_anagram(user_first_string, strlen(user_first_string), user_second_string, strlen(user_second_string));

    if (1 == anagram)
    {
        printf("%s and %s are Anagram\n", user_first_string, user_second_string);
    }
    else
    {
        printf("%s and %s are not Anagram\n", user_first_string, user_second_string);
    }

    return 0;
}

unsigned int are_anagram(unsigned char first_string[], unsigned int first_string_size, 
                        unsigned char second_string[], unsigned int second_string_size)
{
    unsigned int first_index = 0;
    unsigned int second_index = 0;
    unsigned int first_counter = 0;
    unsigned int second_counter = 0;
    unsigned int return_value = 1;

    if (first_string_size != second_string_size)
    {
        return_value = 0;
    }
    else
    {
        for (first_index = 0; first_index < first_string_size; first_index++)
        {
            first_counter = 0;
            second_counter = 0;
            for (second_index = 0; second_index < first_string_size; second_index++)
            {
                if (first_string[first_index] == first_string[second_index])
                {
                    first_counter++;
                }
                else
                {}
            }
            for (second_index = 0; second_index < second_string_size; second_index++)
            {
                if (first_string[first_index] == second_string[second_index])
                {
                    second_counter++;
                }
                else
                {}
            }
            if (first_counter != second_counter)
            {
                return_value = 0;
                break;
            }
            else
            {}
        }
    }

    return return_value;
}