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
