#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#define NUM_ITERATIONS 100
int nb = 0;
sem_t my_sem;
void* addThread(void* arg) {
    for (int i = 0; i < NUM_ITERATIONS; ++i) {
        sem_wait(&my_sem);
        nb++;
        sem_post(&my_sem);
    }
    pthread_exit(NULL);
}
void* subThread(void* arg) {
    for (int i = 0; i < NUM_ITERATIONS; ++i) {
        sem_wait(&my_sem);
        nb--;
        sem_post(&my_sem);
    }
    pthread_exit(NULL);
}
int main() {
    sem_init(&my_sem, 0, 1);
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, addThread, NULL);
    pthread_create(&thread2, NULL, subThread, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
   sem_destroy(&my_sem);
    printf("La valeur de la variable nb à la fin des threads : %d\n", nb)
    return 0;}
