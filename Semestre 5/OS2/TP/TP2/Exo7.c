#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    pid = fork();
    int i,j=1;

    for(i=1;i<=3;i++) {
      
        if (pid == -1) {
           printf("Erreur lors de la création du premier fils");
           exit(EXIT_FAILURE);
        }
       
        else if (pid == 0) {
           printf("je suis le fils %d de PID = %d et mon pere est de PPID = %d \n",i,getpid(),getppid());
           pid = fork();
           j++;

           if ((pid == 0) && (j == 4)) {
              printf("je suis le fils %d de PID = %d et mon pere est de PPID = %d \n",j,getpid(),getppid());
           }
        }

        else {
           wait(NULL);
           exit(EXIT_SUCCESS);  
        }   
    }
     
    return 0;
}
