#include <stdio.h>
#include <stdlib.h>

int mul(int num1, int num2)
{
    // Multiply the numbers and return the result
    return num1 * num2;
}

void print_int(int n)
{
    // A recursive function to print an integer using putchar
    if (n < 0)
    {
        // Print a minus sign if the number is negative
        putchar('-');
        // Make the number positive
        n = -n;
    }
    if (n / 10 > 0)
    {
        // Print the digits from left to right
        print_int(n / 10);
    }
    // Print the last digit
    putchar('0' + n % 10);
}

int main(int argc, char *argv[])
{
    // Check if the number of arguments is correct
    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    // Check if the arguments are valid
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Error\n");
                exit(98);
            }
        }
    }

    // Convert the arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Call the mul function and get the result
    int result = mul(num1, num2);

    // Call the print_int function and print a new line
    print_int(result);
    putchar('\n');

    return 0;
}
