#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

#define TASK1_PRIORITY 1
#define TASK2_PRIORITY 2
#define TASK3_PRIORITY 3
#define CRITICAL_SECTION_DURATION 5

// Define the semaphore
sem_t semaphore;

// Define the task functions
void *task1(void *arg) {
    while (1) {
        // Wait for the semaphore
        sem_wait(&semaphore);

        // Critical section
        printf("Task 1 is running\n");
        sleep(CRITICAL_SECTION_DURATION);

        // Release the semaphore
        sem_post(&semaphore);
    }
}

void *task2(void *arg) {
    while (1) {
        // Critical section
        printf("Task 2 is running\n");
        sleep(10);

        // Wait for the semaphore
        sem_wait(&semaphore);

        // Release the semaphore
        sem_post(&semaphore);
    }
}

void *task3(void *arg) {
    while (1) {
        // Wait for the semaphore
        sem_wait(&semaphore);

        // Critical section
        printf("Task 3 is running\n");
        sleep(15);

        // Release the semaphore
        sem_post(&semaphore);
    }
}

int main() {
    // Initialize the semaphore
    sem_init(&semaphore, 0, 1);

    // Create the threads
    pthread_t thread1, thread2, thread3;
    pthread_create(&thread1, NULL, task1, NULL);
    pthread_create(&thread2, NULL, task2, NULL);
   pthread_create(&thread3, NULL, task3, NULL);

    // Wait for the threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);

    return 0;
}
