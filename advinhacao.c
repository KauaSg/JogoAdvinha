#include <stdio.h>

int main (){

    
    printf("bem vindo ao jogo\n");

    int numeroSecreto = 42;
    int chute;

    printf("Qual o seu chute\n");
    scanf("%d", &chute);

    printf("seu chute foi %d \n", chute);

    int acertou = chute == numeroSecreto;


    while(){
    if (acertou){
        printf("Voce acertou\n");
    } else {
        if(chute < numeroSecreto){
            printf("Seu chute foi menor que o numero\n");
        }
        if(chute > numeroSecreto){
            printf("Seu chute foi maior que o numero\n");
        }
    }}
}



// multiplica numero
// int main (){

// 	int primeirox;
//     printf("Digite o primeiro\n");
//     scanf("%d", &primeirox);
	
// 	int segundoy;
//     printf("Digite o segundo\n");
//     scanf("%d", &segundoy);

//     int resultado =  primeirox * segundoy;
//     printf("Teste de variavel %d", resultado);
// }