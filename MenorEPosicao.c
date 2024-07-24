#include <stdio.h>

int main(void)
{
   int i, tam, pos, menor;
   
    scanf("%d", &tam);
    int vet[tam];
    
    for(i=0; i<tam; i++)
        scanf("%d",&vet[i]);
        
    menor=vet[0];
    
    for(i=1; i<tam; i++)
    {
        if(menor>vet[i])
        {
            menor=vet[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",pos);
}
