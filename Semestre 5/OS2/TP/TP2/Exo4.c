#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main() {
    pid_t pid1, pid2;
    int i;
    pid1 = fork();
    
    if (pid1 == -1) {
        printf("Erreur lors de la création du processus fils 1");
        return 0;
    }
    if (pid1 == 0) { 
        printf("je suis le fils de PID = %d et mon pere est de PPID = %d \n",getpid(),getppid());
        for (i = 1; i <= 50; i++) {
        	printf("%d ", i);
        }
        printf("\n");
    } 

    else  {
        wait(NULL);
        pid2 = fork();
        if (pid2 == -1) {
            printf("Erreur lors de la création du processus fils 2");
            return 0;
        }

        if (pid2 == 0) {
            printf("je suis le fils de PID = %d et mon pere est de PPID = %d \n",getpid(),getppid());
            for (i = 51; i <= 100; i++) {
        	printf("%d ", i);
            }
            printf("\n");
        } 
        else {
            wait(NULL);
            printf("Fin de traitement \n");
        }
    }

    return 0;
}
