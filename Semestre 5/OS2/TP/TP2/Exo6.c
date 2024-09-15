#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main() {
    pid_t pid1, pid2;
    pid1 = fork();

    if (pid1 == -1) {
        printf("Erreur lors de la création du premier fils");
        exit(EXIT_FAILURE);
    }

    else if (pid1 == 0) {
        int somme = 0;
        for (int i = 1; i <= 20; i += 2) {
            somme += i;
        }
        printf("La somme des entiers impairs est : %d\n", somme);
        exit(EXIT_SUCCESS);
    }

    pid2 = fork();

    if (pid2 == -1) {
        printf("Erreur lors de la création du deuxième fils");
        exit(EXIT_FAILURE);
    }
 
    else if (pid2 == 0) {
        int somme = 0;
        for (int i = 2; i <= 20; i += 2) {
            somme += i * i;
        }
        printf("LA somme des carrés des entiers pairs est : %d\n", somme);
        exit(EXIT_SUCCESS);
    }

    
    wait(NULL);

    printf("Fin de traitement\n");

    return 0;
}
