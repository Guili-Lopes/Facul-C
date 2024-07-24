/*
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.
Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.
*/

#include <stdio.h>

int main(void) {

    int hora_inicial, hora_final, minuto_inicial, minuto_final, h1, h2, tempo_total, total_horas, total_minutos;
    int segundos = 86400, segundos_horas, segundos_minutos, segundos_totais, segundos_restante, tempo_segundos; 
    
    scanf("%d %d %d %d",&hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    h1 = hora_inicial * 60;
    h2 = hora_final * 60;

    tempo_total = (h2+minuto_final) - (h1+minuto_inicial);
    
    if(tempo_total > 0){
        total_horas = tempo_total/60;
        total_minutos = (tempo_total % 60);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_horas, total_minutos);
    }
    else if(tempo_total < 0){
        tempo_total = tempo_total * -1;
        total_horas = tempo_total/60;
        total_minutos = (tempo_total % 60);
        
        segundos_horas = total_horas*3600;
        segundos_minutos = total_minutos*60;

        tempo_segundos = segundos_minutos + segundos_horas;
        segundos_totais = segundos - tempo_segundos;
        
        total_horas = segundos_totais/3600;
        segundos_restante = total_horas*3600;
        total_minutos = (segundos_totais-segundos_restante)/60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_horas, total_minutos);
    }
    else{
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
}
