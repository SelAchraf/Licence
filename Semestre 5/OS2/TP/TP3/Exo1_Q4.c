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
        for (i = 0; i < 1000; i++) {
        	printf("*");
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
            for (i = 0; i < 1000; i++) {
        	printf("#");
            }
            printf("\n");
        } 
        else {
            wait(NULL);
        }
    }

    return 0;
}

