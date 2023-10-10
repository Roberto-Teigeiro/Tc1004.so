#include <stdio.h>
#include <stdlib.h> 
#include <pthread.h>

void * holahilo(){
printf("Hola desde un hilo\n");
}

int main(){
    pthread_t
    pthread_create(&t,NULL,holahilo,NULL);
    return 0;
}