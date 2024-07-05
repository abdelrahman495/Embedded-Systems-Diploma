#include <stdio.h>

void solid_rectangle(unsigned int rows, unsigned int columns);

int main(void)
{
    unsigned int user_rows = 0;
    unsigned int user_columns = 0;

    printf("Enter the number of rows: ");
    scanf("%i", &user_rows);

    printf("Enter the number of columns: ");
    scanf("%i", &user_columns);

    solid_rectangle(user_rows, user_columns);

    return 0;
}

void solid_rectangle(unsigned int rows, unsigned int columns)
{
    unsigned int row_index = 0;
    unsigned int column_index = 0;

    for (row_index = 1; row_index <= rows; row_index++)
    {
        for (column_index = 1; column_index <= columns; column_index++)
        {
            printf("*");
        }
        printf("\n");
    }
}