#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    printf("ABC ");
    pid = fork();
    if (pid < 0)
    {
        printf("unsuccessful fork\n");
    }
    else if (pid == 0)
    {
        printf("Child-");
        printf("PID=%d, PPID=%d\n", getpid(), getppid());
        for (int i = 0; i < 1000; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("Parent-");
        printf("PID=%d, PPID=%d\n", getpid(), getppid());
        for (int i = 0; i < 1000; i++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
