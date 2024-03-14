/*
Faça um programa que leia três valores e apresente o maior 
dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int A, B, C, MAIOR_AB, MAIOR_ABC;
    
    scanf("%d %d %d", &A, &B, &C);
    
    MAIOR_AB = (A+B + abs(A-B)) / 2;
    MAIOR_ABC = (MAIOR_AB + C + abs(MAIOR_AB-C)) / 2;
    
    printf("%d eh o maior\n", MAIOR_ABC);
}
