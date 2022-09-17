#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor, contadorv=0;
    
    printf("Até qual valor você quer que vá a contagem? ");
    scanf ("%i" , &valor);
    
            while(valor >= contadorv){
        
            printf("%i\n", valor);
        
                            valor--;
        
                                    }
    return 0;
}