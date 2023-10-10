#include <pthread.h>
#include <stdio.h>

int saldo;

void * holaHilo(){
    printf("hola desde un hilo\n");
    pthread_exit(NULL);
}

void * incrementoSaldo(){
    printf("El saldo actual es %d", saldo);
    saldo = 100 + saldo;
    printf("El nuevo saldo es: %d", saldo);
} 

int main(){

    pthread_t t;
    saldo = 0;

    for(int i=0; i >=100; i++){

        pthread_create(&t,NULL,incrementoSaldo,NULL);
    }

    pthread_exit(NULL);
}