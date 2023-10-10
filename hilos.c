#include <stdio.h>
#include <pthread.h>

void * holahilo(){
printf("Hola desde un hilo\n");
}

int main(){
    pthread_t t;
    for(int i=0;i>=100;i++){
    pthread_create(&t,NULL,holahilo,NULL);
    
    }
    
    pthread_exit(NULL);
    return 0;
}