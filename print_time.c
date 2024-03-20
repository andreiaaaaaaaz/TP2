#include <stdio.h>
#include <time.h>

int main()
{
    // Get the current time using clock()
    clock_t t = clock();

    // Loop until the user interrupts the program
    while (1)
    {
        // Calculate the current time
        clock_t current_time = clock();

        // Calculate the elapsed time since the last loop
        double elapsed_time = ((double)(current_time - t)) / CLOCKS_PER_SEC;

        // Check if one second has elapsed
        if (elapsed_time >= 1.0)
        {
            // Print the current time
            printf("Current time: %f seconds\n", elapsed_time);

            // Update the starting time
            t = current_time;
        }
    }

    return 0;
}
