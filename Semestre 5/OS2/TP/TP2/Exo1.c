#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int pid = getpid();
    printf("je suis le processus avec le PID : %d\n", pid);
    int ppid = getppid();
    printf("mon pere a le PPID : %d ", ppid);
    return 0;
}
