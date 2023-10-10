#include <stdio.h>
#include <pthread.h>

void * holahilo(){
printf("Hola desde un hilo\n");
}

int main(){
    pthread_t t;
    pthread_create(&t,NULL,holahilo,NULL);
    pthread_exit(NULL);
    return 0;
}