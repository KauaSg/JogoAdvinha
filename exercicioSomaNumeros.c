#include <stdio.h>
int main (){
  
    printf("Imprimir numero\n");
    int soma = 0;
     
    // Usando For
    for(int i = 1; i <= 100; i++) {
        soma = soma + i;
        
        printf("Resultado %d \n", soma);
    }
}