#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    pid_t pid2, pid3, pid4, pid5;
    pid2 = fork();
    if (pid2 > 0)
    {
        printf("P1-> PID=%d, PPID=%d\n", getpid(), getppid());
        pid3 = fork();
        if (pid3 == 0)
        {
            printf("P3-> PID=%d, PPID=%d\n", getpid(), getppid());
            pid4 = fork();
            if (pid4 == 0)
            {
                printf("P4-> PID=%d, PPID=%d\n", getpid(), getppid());
                pid5 = fork();
                if (pid5 < 0)
                {
                    printf("P5-> Creation Failed\n");
                }

                else if (pid5 == 0)
                {
                    printf("P5-> PID=%d, PPID=%d\n", getpid(), getppid());
                }
            }
        }
    }
    else if (pid2 == 0)
    {
        printf("P2-> PID=%d, PPID=%d\n", getpid(), getppid());
    }
    return 0;
}
