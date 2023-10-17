#include <pthread.h>
#include <stdio.h>

int saldo;

void * holaHilo(void *thid){
    printf("hola desde un hilo %d\n",*((int *)thid));
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
    int thid =1;
    for(int thid=0;thid<100;thid++){
    pthread_create(&t,NULL,holaHilo, &thid);
    
    };
    pthread_exit(NULL);
}