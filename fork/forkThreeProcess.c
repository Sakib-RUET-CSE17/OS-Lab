#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    pid_t pid2, pid3;
    pid2 = fork();
    if (pid2 < 0)
    {
        printf("P2 create failed\n");
    }
    else if (pid2 == 0)
    {
        printf("P2 -> PID=%d, PPID=%d\n", getpid(), getppid());
        pid3 = fork();
        if (pid3 < 0)
        {
            printf("P3 create failed\n");
        }
        else if (pid3 == 0)
        {
            printf("P3 -> PID=%d, PPID=%d\n", getpid(), getppid());
        }
        else
        {
            // printf("inside P2, P2 -> PID=%d, PPID=%d\n", getpid(), getppid());
        }
    }
    else
    {
        printf("P1 -> PID=%d, PPID=%d\n", getpid(), getppid());
    }

    return 0;
}
