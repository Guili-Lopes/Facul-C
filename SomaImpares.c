/*
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
*/

#include <stdio.h>

void SomaImpar(int a, int b);

int main(void) {
    int num1, num2, maior, menor;
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    if(num1>num2){
        maior = num1-1;
        menor = num2;
        SomaImpar(maior, menor);
    }
    else if(num1<num2){
        maior = num2-1;
        menor = num1;
        SomaImpar(maior, menor);
    }
    else{
        printf("0\n");
    }
}

void SomaImpar(int a, int b){
    int soma = 0;
    while(a>b){
        if(a%2 != 0)
            soma += a;
        a--;
    }
    printf("%d\n",soma);
}
