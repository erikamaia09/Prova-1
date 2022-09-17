#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmr, soma=1, tabuada,conta=0;
    
    printf("digite um número da tabuada : ");
    scanf ("%i" , &nmr);
    
    while(nmr > 0 && soma <= nmr){
        
        tabuada= soma*conta;
        
        printf("%i X %i = %i \n" , soma, conta, tabuada);
        
        conta++;
        
       if(conta == 11){
           
        conta = 0;
        soma ++;
        printf ("\n");
        
        }
    }
    

    return 0;
}