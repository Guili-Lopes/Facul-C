/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer 
no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, 
mostrando 4 casas decimais após a vírgula, segundo a fórmula:
 */

#include <stdio.h>
 
int main(void) {
 
    int A, B, C, D, DIF;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    DIF = (A*B) - (C*D);

    printf("DIFERENCA = %d\n", DIF);
}
