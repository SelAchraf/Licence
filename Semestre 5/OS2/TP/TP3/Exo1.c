#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>



void* Afficher1(void* arg){
	for (int i=0 ; i<10000 ; i++){       
		printf("*");
	}
	printf("\n");
}

void* Afficher2(void* arg){ 
      	for (int i=0 ; i<10000 ; i++){       
                printf("#");
        }
	printf("\n");
}

int main()
{
    int i;
    pthread_t Thread1,Thread2;
    pthread_create (&Thread1 , NULL , Afficher1 , NULL);
    pthread_join(Thread1 , NULL);
    pthread_create (&Thread2 , NULL , Afficher2 , NULL);
    pthread_join(Thread2 , NULL); 
   return 0;
}


