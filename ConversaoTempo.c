/*
Leia um valor inteiro, que é o tempo de 
duração em segundos de um determinado evento 
em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int tempo, segundos, minutos, horas;
    
    scanf("%d", &tempo);
    
    horas = tempo/3600;
    tempo = tempo - (horas * 3600);
    
    minutos = tempo/60;
    tempo = tempo - (minutos * 60);
    
    segundos = tempo;
   
    printf("%d:%d:%d\n",horas, minutos, segundos);

}
