#include<stdio.h>

int main(int argc, char** argv){
    int i;
    int sum=0;
    printf("%d\n",argc);
    for(i=0;i<argc;i++){
        sum+=atoi(argv[i]);
    }
    printf("%d\n",sum);
    // printf("hello world");
    return 0;
}