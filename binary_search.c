#include <stdio.h>

#define LENGTH 5

int binary_search(int *arr, int size, int target)
{
    int start = 0;
    int end = size - 1;

    // Loop until the start index is greater than the end index
    while (start <= end)
    {
        // Calculate the middle index of the current range
        int mid = start + (end - start) / 2;

        // Check if the middle element is the target value
        if (arr[mid] == target)
        {
            return mid;
        }

        // Check if the middle element is less than the target value
        if (arr[mid] < target)
        {
            // Set the start index to the middle index plus one
            start = mid + 1;
        }

        // Check if the middle element is greater than the target value
        else
        {
            // Set the end index to the middle index minus one
            end = mid - 1;
        }
    }

    // Return -1 if the target value is not found
    return -1;
}

int main()
{
    // Declare an ordered array of integers
    int numbers[LENGTH] = {1, 2, 3, 4, 5};

    // Declare a variable to store the target value
    int target = 4;

    // Perform binary search
    int index = binary_search(numbers, LENGTH, target);

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
