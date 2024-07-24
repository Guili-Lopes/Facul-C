#include <stdio.h>

int main(void) {
   int col, i, j;
   char op[2];
   float matriz[12][12], media, soma=0.0;
   
   scanf("%d",&col);
   scanf("%s",&op);
   
   for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&matriz[i][j]);
            if(col==j)
                soma = soma + matriz[i][j];
        }
    }
    
    if(op[0]=='S')
        printf("%.1f\n",soma);
    else if(op[0]=='M'){
        media = soma/12;
        printf("%.1f\n",media);
    }
}
