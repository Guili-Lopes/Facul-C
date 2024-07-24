/*
  Vó Vitória mantém, desde o nascimento dos netos Joãozinho e Zezinho, um ritual que faz a alegria dos meninos.
  Ela guarda todas as moedas recebidas como troco em dois pequenos cofrinhos, um para cada neto. Quando um dos cofrinhos 
  fica cheio, ela chama os dois netos para um alegre almoço, ao final do qual entrega aos garotos as moedas guardadas nos cofrinhos de cada um.
Ela sempre foi muito zelosa quanto à distribuição igualitária do troco arrecadado. Quando, por força do valor das moedas,
ela não consegue depositar a mesma quantia nos dois cofrinhos, ela memoriza a diferença de forma a compensá-la no próximo depósito.
Vó Vitória está ficando velha e tem medo que deslizes de memória a façam cometer injustiças com os netos, deixando de compensar as diferenças 
entre os cofrinhos. Sua tarefa é ajudar Vó Vitória, escrevendo um programa de computador que indique as diferenças entre os depósitos, 
de forma que ela não tenha que preocupar-se em memorizá-las.
  */

#include<stdio.h>

int main(void)
{
    int qtd_deposito, joaozinho, zezinho, cont;
    cont=1;
    
    while(1){
        int total = 0;
        scanf("%d",&qtd_deposito);
        if(qtd_deposito==0)
            break;
        printf("Teste %d\n",cont);    
        for(int i=1; i<=qtd_deposito; i++){
            scanf("%d %d",&joaozinho, &zezinho);
            total += joaozinho - zezinho;
            printf("%d\n",total);
        }
        printf("\n");    
        cont++;
    }
}
