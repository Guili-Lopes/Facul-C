/*Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, 
iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar,
uma vez que ele sabe quando inicia e quando termina o evento. Sabendo que o evento pode durar de poucos segundos 
a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.
  */

#include <stdio.h>
 
int main(void) {
    
    int tempo_inicio, tempo_final, tempo_total;
    int total_dias, total_horas, total_minutos, total_segundos;
    int dia_inicio, dia_final;
    int hora_inicio, hora_final;
    int minuto_inicio, minuto_final;
    int segundo_inicio, segundo_final;
    int d1, d2, h1, h2, m1, m2;
    
    scanf("Dia %d", &dia_inicio);
    scanf("%d : %d : %d\n", &hora_inicio, &minuto_inicio, &segundo_inicio);
    scanf("Dia %d", &dia_final);
    scanf("%d : %d : %d", &hora_final, &minuto_final, &segundo_final);

    d1 = dia_inicio * 86400;
    d2 = dia_final * 86400;
    h1 = hora_inicio * 3600;
    h2 = hora_final * 3600;
    m1 = minuto_inicio * 60;
    m2 = minuto_final * 60;
    
    tempo_inicio = d1 + h1 + m1 + segundo_inicio;
    tempo_final =  d2 + h2 + m2 + segundo_final;
    tempo_total = tempo_final - tempo_inicio;
    
    if(tempo_total>0){
        total_dias = tempo_total / 86400;
        total_horas = (tempo_total - (total_dias*86400)) / 3600;
        total_minutos = (tempo_total - (total_dias*86400 + total_horas*3600)) / 60;
        total_segundos = tempo_total - (total_dias*86400 + total_horas*3600 + total_minutos*60);
        
        printf("%d dia(s)\n",total_dias);
        printf("%d hora(s)\n",total_horas);
        printf("%d minuto(s)\n",total_minutos);
        printf("%d segundo(s)\n",total_segundos);
    }
    
}
