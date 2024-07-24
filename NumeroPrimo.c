#include <stdio.h>

int main(void) {
    int num_testes, num, divisor, ehprimo;
    
    scanf("%d",&num_testes);
    for(int i=1; i<=num_testes; i++){
        divisor = 2;
        ehprimo = 1;
        scanf("%d",&num);
        while(divisor<=num/2){
            if(num%divisor==0)
                ehprimo=0;
            divisor++;
        }
        if(ehprimo==1)
            printf("%d eh primo\n",num);
        else{
            printf("%d nao eh primo\n",num);
        }
    }
}
