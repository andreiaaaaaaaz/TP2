#include <stdio.h>

#define LENGTH 5

int main()
{
    // Declare an array of integers
    int numbers[LENGTH] = {1, 2, 3, 4, 5};

    // Declare a variable to store the target value
    int target = 4;

    // Declare a variable to store the index of the target value
    int index = -1;

    // Loop through the array
    for (int i = 0; i < LENGTH; i++)
    {
        // Check if the current element is the target value
        if (numbers[i] == target)
        {
            // Set the index variable to the current index
            index = i;
            break;
        }
    }

    // Check if the target value was found
    if (index != -1)
    {
        // Print the index of the target value
        printf("The target value %d was found at index %d\n", target, index);
    }
    else
    {
        // Print that the target value was not found
        printf("The target value %d was not found\n", target);
    }

    return 0;
}
