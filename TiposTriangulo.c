/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em 
ordem decrescente, de modo que o lado A representa o maior dos 3 lados. 
A seguir, determine o tipo de triângulo que estes três lados formam, 
com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
    se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
*/

#include <stdio.h>
#include <math.h>

int main(void) {

    int num = 0;
    float A, B, C, x1, x2;

    scanf("%f %f %f",&A, &B, &C);
    

    if( (A>=B)&&(B>=C) ){
        x1 = pow(A,2);
        x2 = pow(B,2) + pow(C,2);
        
        if(A>=(B+C)){
             printf("NAO FORMA TRIANGULO\n");
             num++;
        }
        else{
            if(x1==x2){
                printf("TRIANGULO RETANGULO\n");
            }
            else if(x1>x2){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(x1<x2){
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
    }

    else if( (A>=C)&&(C>=B) ){
        x1 = pow(A,2);
        x2 = pow(B,2) + pow(C,2);
        
        if(A>=(B+C)){
             printf("NAO FORMA TRIANGULO\n");
             num++;
        }
        else{
            if(x1==x2){
                printf("TRIANGULO RETANGULO\n");
            }
            else if(x1>x2){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(x1<x2){
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
    }

    else if( (B>=A)&&(A>=C) ){
        x1 = pow(B,2);
        x2 = pow(A,2) + pow(C,2);
        
        if(B>=(A+C)){
             printf("NAO FORMA TRIANGULO\n");
             num++;
        }
        else{
            if(x1==x2){
                printf("TRIANGULO RETANGULO\n");
            }
            else if(x1>x2){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(x1<x2){
                printf("TRIANGULO ACUTANGULO\n");
            }
        }    
   
    }

    else if( (B>=C)&&(C>=A) ){
        x1 = pow(B,2);
        x2 = pow(A,2) + pow(C,2);
        
        if(B>=(A+C)){
             printf("NAO FORMA TRIANGULO\n");
             num++;
        }
        else{
            if(x1==x2){
                printf("TRIANGULO RETANGULO\n");
            }
            else if(x1>x2){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(x1<x2){
                printf("TRIANGULO ACUTANGULO\n");
            }
        } 
    }

    else if( (C>=A)&&(A>=B) ){
        x1 = pow(C,2);
        x2 = pow(A,2) + pow(B,2);
        
        if(C>=(A+B)){
             printf("NAO FORMA TRIANGULO\n");
             num++;
        }
        else{
            if(x1==x2){
                printf("TRIANGULO RETANGULO\n");
            }
            else if(x1>x2){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(x1<x2){
                printf("TRIANGULO ACUTANGULO\n");
            }
        } 
      
    }

    else if( (C>=B)&&(B>=A) ) {
        x1 = pow(C,2);
        x2 = pow(A,2) + pow(B,2);
        
        if(C>=(A+B)){
             printf("NAO FORMA TRIANGULO\n");
             num++;
        }
        else{
            if(x1==x2){
                printf("TRIANGULO RETANGULO\n");
            }
            else if(x1>x2){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(x1<x2){
                printf("TRIANGULO ACUTANGULO\n");
            }
        } 
    }
    
    if(num == 0){
       if( (A==B)&&(A==C)&&(B==C) ){
        printf("TRIANGULO EQUILATERO\n");
        }
       else if( (A!=B)&&(A!=C)&&(B!=C) ){
           num++;
       }
       else{
           printf("TRIANGULO ISOSCELES\n");
       }
    }

}
