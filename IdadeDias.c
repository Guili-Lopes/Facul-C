#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int dias, ano, mes;
    
    scanf("%d", &dias);
    
    ano = dias/365;
    dias = dias - (ano * 365);
    
    mes = dias/30;
    dias = dias - (mes * 30);
   
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano, mes, dias);

}
