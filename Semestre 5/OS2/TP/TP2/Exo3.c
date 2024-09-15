#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid1, pid2;

    pid1 = fork();

    if (pid1 == -1) {
        printf("Erreur lors de la création du processus fils1");
    }

    else  if (pid1 == 0) {
        printf("Je suis le processus fils1 de PID = %d et mon pere est le processus de PID = %d\n",getpid(),getppid());
        return 0; 
    }
    else {
        printf("Je suis le processus père de PID = %d\n",getpid());
        pid2 = fork();
    }

    if (pid2 == -1) {
        printf("Erreur lors de la création du processus fils2");
    }

    else if (pid2 > 0) {
        printf("Je suis le processus père de PID = %d\n",getpid());
    }
    else {
        printf("Je suis le processus fils2 de PID = %d et mon pere est le processus de PID = %d\n",getpid(),getppid());
    }

    return 0;
}
