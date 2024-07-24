#include <stdio.h>

long long int fibonacci(long long int limite);

int main(void)
{
    long long int num_termos, res, i;
  
    scanf("%lld",&num_termos);
    long long int vet[num_termos]; 
  
    for(i=0; i<num_termos; i++)
        scanf("%lld",&vet[i]);
    
    for(i=0; i<num_termos; i++){
        res = fibonacci(vet[i]);
        printf("Fib(%lld) = %lld\n",vet[i],res);
    } 
}

long long int fibonacci(long long int limite){
    long long int fib, aux1, aux2;
    
    fib=0; aux1=1; aux2=1;
    if( (limite==1)||(limite==2) )
        return 1;
    else{
        for(int i=3; i<=limite; i++){
            fib = aux1 + aux2;
            aux1 = aux2;
            aux2 = fib;
        }
        return fib;
    }
} 
