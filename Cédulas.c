/*
Leia um valor inteiro. A seguir, calcule o menor número de notas
possíveis (cédulas) no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1.
A seguir mostre o valor lido e a relação de notas necessárias.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int valor, divisao, nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, nota_1;
    
    scanf("%d", &valor);
    
    divisao = valor;
    
    nota_100 = divisao/100;
    divisao = divisao - (nota_100 * 100);
    
    nota_50 = divisao/50;
    divisao = divisao - (nota_50 * 50);
    
    nota_20 = divisao/20;
    divisao = divisao - (nota_20 * 20);
    
    nota_10 = divisao/10;
    divisao = divisao - (nota_10 * 10);
    
    nota_5 = divisao/5;
    divisao = divisao - (nota_5 * 5);
    
    nota_2 = divisao/2;
    divisao = divisao - (nota_2 * 2);
    
    nota_1 = divisao/1;
    divisao = divisao - (nota_1 * 1);
    
    printf("%d\n",valor);
    printf("%d nota(s) de R$ 100,00\n", nota_100);
    printf("%d nota(s) de R$ 50,00\n", nota_50);
    printf("%d nota(s) de R$ 20,00\n", nota_20);
    printf("%d nota(s) de R$ 10,00\n", nota_10);
    printf("%d nota(s) de R$ 5,00\n", nota_5);
    printf("%d nota(s) de R$ 2,00\n", nota_2);
    printf("%d nota(s) de R$ 1,00\n", nota_1);
}
