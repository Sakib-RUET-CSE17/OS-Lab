#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    int sum = 0;
    printf("argc=%d\n", argc);
    for (i = 0; i < argc; i++)
    {
        printf("arg%d=%s\n", i, argv[i]);
        sum += atoi(argv[i]);
    }
    printf("sum=%d\n", sum);
    return 0;
}