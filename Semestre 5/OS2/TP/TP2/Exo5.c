#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    for (int i = 1; i <= 3; ++i) {
        pid_t pid = fork(); 

        if (pid == -1) {
            printf("Erreur lors de la création du processus fils");
            return 0;
        } 
        
        if (pid == 0) {
            printf("i = %d, je suis le  processus de PID = %d, mon père est de PPID = %d \n", i, getpid(), getppid());
            return 0;
        } 

        else {
            wait(NULL);
        }
    }

    return 0;
}
