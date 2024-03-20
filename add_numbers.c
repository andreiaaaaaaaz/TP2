#include <stdio.h>

// Declare the function prototype
int add_numbers(int a, int b);

int main()
{
    // Call the function and assign the result to a variable
    int sum = add_numbers(4, 5);

    // Print the result
    printf("The sum is: %d\n", sum);

    return 0;
}

// Define the function implementation
int add_numbers(int a, int b)
{
    // Return the sum of the two arguments
    return a + b;
}
