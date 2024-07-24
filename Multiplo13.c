#include <stdio.h>

void SomaDiv13(int a, int b);

int main(void) {
    int num1, num2, maior, menor;
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    if(num1>num2){
        maior = num1;
        menor = num2;
        SomaDiv13(maior, menor);
    }
    else if(num1<num2){
        maior = num2;
        menor = num1;
        SomaDiv13(maior, menor);
    }
}

void SomaDiv13(int a, int b){
    int soma = 0;
    while(a>=b){
        if(a%13 != 0)
            soma += a;
        a--;
    }
    printf("%d\n",soma);
}
