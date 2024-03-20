#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM_TASKS 3
#define TIME_SLICE 1

// Define the task functions
void task1() {
    printf("Task 1 is running\n");
    sleep(1);
}

void task2() {
    printf("Task 2 is running\n");
    sleep(2);
}

void task3() {
    printf("Task 3 is running\n");
    sleep(3);
}

// Define the Round Robin scheduler
void round_robin() {
    // Define the task queue
    int current_task = 0;
    int remaining_time[NUM_TASKS];

    // Initialize the remaining time for each task
    for (int i = 0; i < NUM_TASKS; i++) {
        remaining_time[i] = TIME_SLICE;
    }

    // Start the scheduler
    while (1) {
        // Check if the current task has any remaining time
        if (remaining_time[current_task] == 0) {
            // Move to the next task
            current_task = (current_task + 1) % NUM_TASKS;
        }

        // Execute the current task
        switch (current_task) {
            case 0:
                task1();
                break;
            case 1:
                task2();
                break;
            case 2:
                task3();
                break;
        }

        // Decrement the remaining time for the current task
        remaining_time[current_task]--;

        // Yield the CPU to the scheduler
        sleep(1);
    }
}

int main()
{
    // Start the Round Robin scheduler
    round_robin();

    return 0;
}
