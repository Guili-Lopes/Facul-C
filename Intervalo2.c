/*
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.
*/

#include <stdio.h>

int main(void) {
    int cont, num, in, out;
    in = 0;
    out = 0;
    scanf("%d",&cont);
    for(int i=1; i<=cont; i++){
        scanf("%d",&num);
        if( (num>=10)&&(num<=20) )
            in++;
        else
            out++;
    }
    printf("%d in\n%d out\n",in, out);
}
