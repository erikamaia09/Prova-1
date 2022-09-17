#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
    
    int main() {
        
      int dia,ano,mes,f,x,y,z;
          
      
        printf("Digite o dia do Nascimento:\n");
        scanf("%d",&dia);
        printf("Digite o mês do Nascimento:\n");
        scanf("%d",&mes);
        printf("Digite o ano do Nascimento:\n");
        scanf("%d",&ano);
                      
        f=(dia*100+mes)+ano;
        x=(f/100) +(f % 100);
        y=x%5;
        
                       
        if(y==0) 
            printf("O perfil é Tímido");
            
        else if(y==1)
            printf("O perfil é Sonhador");
            
        else if(y==2)
            printf("O perfil é Paquerador");
            
        else if(y==3)
            printf("O perfil é Atarente");
            
        else if (y==4)
            printf("O perfil é Irresistível");
        
    return 0;
}