#include <stdio.h>

int main()
{
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Compare and print the larger value
    if (num1 > num2)
    {
        printf("The larger value is: %d\n", num1);
    }
    else
    {
        printf("The larger value is: %d\n", num2);
    }

    return 0;
}
