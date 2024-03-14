#include <stdio.h>

int main(void) {

    int A, B, C;

    scanf("%d %d %d",&A, &B, &C);

    if( (A>=B)&&(B>C) ){
        printf("%d\n%d\n%d\n\n",C,B,A);
        printf("%d\n%d\n%d\n",A,B,C);
    }

    if( (A>=C)&&(C>B) ){
        printf("%d\n%d\n%d\n\n",B,C,A);
        printf("%d\n%d\n%d\n",A,B,C);
    }

     if( (B>=A)&&(A>C) ){
        printf("%d\n%d\n%d\n\n",C,A,B);
        printf("%d\n%d\n%d\n",A,B,C);
    }

    if( (B>=C)&&(C>A) ){
        printf("%d\n%d\n%d\n\n",A,C,B);
        printf("%d\n%d\n%d\n",A,B,C);
    }

    if( (C>=A)&&(A>B) ){
        printf("%d\n%d\n%d\n\n",B,A,C);
        printf("%d\n%d\n%d\n",A,B,C);
    }

    if( (C>=B)&&(B>A) ) {
        printf("%d\n%d\n%d\n\n",A,B,C);
        printf("%d\n%d\n%d\n",A,B,C);
    }
}
