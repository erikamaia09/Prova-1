#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[100], email[150],telefone[30];
    
    
    printf("Digite teu nome:");
    gets(nome);
    
    printf("Digite o  e-mail:");
    gets(email);
    
    printf("Digite o telefone:");
    gets(telefone);
    
    
    
    
    printf("\n Nome = %zu\n",strlen(nome));
    printf("\n E-mail = %zu\n",strlen(email));
    printf("\n Telefone = %zu\n",strlen(telefone));
    
    
    return 0;
    
    
    
    
}