#include <stdio.h>
int main(void) {
    int N[1000], t, cont=0;
    
    scanf("%d",&t);
    
    for(int i=0; i<1000; i++){
        printf("N[%d] = %d\n",i, cont);
        cont++;
        if(cont == t)
            cont = 0;
    }
}
