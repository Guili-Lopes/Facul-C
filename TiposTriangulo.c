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
