/*
Álbuns de figurinhas – sejam de times de futebol, princesas ou super-heróis – têm marcado gerações de crianças e adolescentes. 
Conseguir completar um álbum é uma tarefa muitas vezes árdua, envolvendo negociações com colegas para a troca de figurinhas.
Mas a existência das figurinhas propicia uma outra brincadeira, que foi muito popular entre crianças no século passado:
o jogo de bater figurinhas (o famoso “Bafo”). O jogo é muito simples, mas divertido (e muito competitivo). No início de uma partida, 
cada criança coloca em uma pilha um certo número de figurinhas. Uma partida é composta de rodadas; a cada rodada as crianças batem com a mão
sobre a pilha de figurinhas, tentando virá-las com o vácuo formado pelo movimento da mão. As crianças jogam em turnos, 
até que a pilha de figurinhas esteja vazia. Ganha a partida a criança que conseguir virar mais figurinhas.
Aldo e Beto estão jogando bafo com todas as suas figurinhas e pediram sua ajuda para calcular quem é o vencedor.
Você deve escrever um programa que, dada a quantidade de figurinhas que Aldo e Beto viraram em cada rodada, determine qual dos dois é o vencedor.
*/

#include <stdio.h>

int main(void){
    int rodadas, fig_aldo, fig_beto;
    int aux = 1;
    
    while(1){
        int cont = 1;
        int total_aldo = 0;
        int total_beto = 0;
        scanf("%d",&rodadas);
        
        if (rodadas == 0) {
            break;
        }
        
        while(cont <= rodadas){
            scanf("%d %d",&fig_aldo, &fig_beto);
            total_aldo += fig_aldo;
            total_beto += fig_beto;
            cont++;
        }
        
        printf("Teste %d\n",aux);
        if (total_aldo > total_beto)
            printf("Aldo");

        else if (total_beto > total_aldo) 
            printf("Beto");
        printf("\n\n");
        aux++;
    }
}
