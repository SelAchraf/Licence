#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {

    pid_t pid = fork(); 
   
    if (pid == -1) {
        printf("Erreur lors de la création du processus fils\n");
    }

    if (pid > 0) {
        wait(NULL);
        printf("Je suis le processus père de PID = %d\n", getpid());
    }

    else if (pid == 0) {
        printf("Je suis le processus fils de PID = %d, et mon père a PPID = %d\n", getpid(), getppid());
    }

    return 0;
}
