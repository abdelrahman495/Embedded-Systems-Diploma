#include <stdio.h>

unsigned int series_sum(unsigned int length);
unsigned int factorial(unsigned int number);

int main(void)
{
    unsigned int user_length = 0;
    unsigned int result = 0;

    printf("Enter the series length: ");
    scanf("%i", &user_length);

    result = series_sum(user_length);
    printf("The sum of the series is: %i\n", result);
    
    return 0;
}

unsigned int series_sum(unsigned int length)
{
    unsigned int sum = 0;
    unsigned int series_index = 0;

    for (series_index = 1; series_index <= length; series_index++)
    {
        sum += (factorial(series_index) / series_index);
    }

    return sum;
}

unsigned int factorial(unsigned int number)
{
    unsigned int return_value = 0;

    if (0 == number)
    {
        return_value = 1;
    }
    else
    {
        return_value = number * factorial(number - 1);
    }
    return return_value;
}