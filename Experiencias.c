/*
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda 
para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, 
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.
Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, 
ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.
*/


#include <stdio.h>

float porcentual(float total_cobaia, float total_c, float total_r, float total_s);

int main(void) {
    char cobaia;
    int num_testes, rato, sapo, coelho, total, qntd_cobaia;
    total = 0;
    rato = 0;
    sapo = 0;
    coelho = 0;
    
    scanf("%d",&num_testes);
    
    for(int i=1; i<=num_testes; i++){
        scanf("%d %c",&qntd_cobaia, &cobaia);
        total += qntd_cobaia;
        if(cobaia == 'C')
            coelho += qntd_cobaia;
        else if(cobaia == 'R')
            rato += qntd_cobaia;
        else if(cobaia == 'S')
            sapo += qntd_cobaia;
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",coelho);
    printf("Total de ratos: %d\n",rato);
    printf("Total de sapos: %d\n",sapo);
    porcentual(total, coelho, rato, sapo);
}

float porcentual(float total_cobaia, float total_c, float total_r, float total_s){
    float porc_c, porc_r, porc_s;
    
    porc_c = (100*total_c) / total_cobaia;
    porc_r = (100*total_r) / total_cobaia;
    porc_s = (100*total_s) / total_cobaia;
    
    printf("Percentual de coelhos: %.2f %\n",porc_c);
    printf("Percentual de ratos: %.2f %\n",porc_r);
    printf("Percentual de sapos: %.2f %\n",porc_s);
}
