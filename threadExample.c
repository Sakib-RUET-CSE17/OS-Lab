#include <stdio.h>
#include <pthread.h>

#define NUMBER_OF_THREADS 10

void *print_hello_world(void *tid)
{
    printf("Hello world. Greetings from thread %d\n", (int)tid);
    pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
    pthread_t threads[NUMBER_OF_THREADS];
    int status, i;
    for (i = 0; i < NUMBER_OF_THREADS; i++)
    {
        printf("Main here. Creating thread %d\n", i);
        status = pthread_create(&threads[i], NULL, print_hello_world, (void *)i);
        if (status != 0)
        {
            printf("Failed to create thread %d and return error code %d\n", i, status);
        }
    }
    return 0;
}