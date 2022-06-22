#include <stdio.h>

int main()
{
    char params[10][10] = {"./a", "1", "2", "3"};
    execvp(params,&params);
    for (int i = 0; i < 4; i++)
    {
        printf("%s ", params[i]);
    }

    return 0;
}