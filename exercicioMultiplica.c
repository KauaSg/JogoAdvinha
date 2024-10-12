#include <stdio.h>
int main (){

    int primeirox;
    printf("Digite o primeiro\n");
    scanf("%d", &primeirox);
        
    int segundoy;
    printf("Digite o segundo\n");
    scanf("%d", &segundoy);

    int resultado =  primeirox * segundoy;
    printf("Resultado de %d x %d = %d", primeirox, segundoy, resultado);
}