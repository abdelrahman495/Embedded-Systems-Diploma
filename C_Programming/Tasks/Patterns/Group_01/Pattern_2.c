#include <stdio.h>

void hollow_rectangle(unsigned int rows, unsigned int columns);

int main(void)
{
    unsigned int user_rows = 0;
    unsigned int user_columns = 0;

    printf("Enter the number of rows: ");
    scanf("%i", &user_rows);

    printf("Enter the number of columns: ");
    scanf("%i", &user_columns);

    hollow_rectangle(user_rows, user_columns);

    return 0;
}

void hollow_rectangle(unsigned int rows, unsigned int columns)
{
    unsigned int row_index = 0;
    unsigned int column_index = 0;

    for (row_index = 1; row_index <= rows; row_index++)
    {
        for (column_index = 1; column_index <= columns; column_index++)
        {
            if ((1 == row_index) || (row_index == rows) || (1 == column_index) || (column_index == columns))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}