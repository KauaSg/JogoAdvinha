#include <stdio.h>
int main (){
  
    printf("Digite o numero\n");
    // Usando While
    int numeroDigitado;
    scanf("%d", &numeroDigitado);

    // while(numeroMaximo <= 99){
    //     numeroMaximo++;
    //     printf("numero %d \n", numeroMaximo);
    // }   
     
    // Usando For
    for(int i = 1; i <= 10; i++) {
        int resultado = numeroDigitado * i;
        printf("Resultado de %d x %d = %d\n", numeroDigitado, i, resultado);
    }
}