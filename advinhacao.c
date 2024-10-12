#include <stdio.h>
#define NUMERO_TENTATIVAS 5

int main (){
  
    printf("bem vindo ao jogo\n");

    int numeroSecreto = 42;
    int chute;
    int tentativas = 1;

    // while com condiçao 1 fica infinito antes estava variavel ganhou == 0
    while (1) {

        printf("---------------------------\n");
        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu chute\n");
        scanf("%d", &chute);
        printf("seu chute foi %d \n", chute);

        if (chute < 0){
            printf("Voce nao pode chutar numeros negativos\n");
            continue;
        }

        if (chute == numeroSecreto){
            printf("Voce acertou\n");
            break;
        } else if (chute < numeroSecreto){
            printf("Seu chute foi menor que o numero\n");
        } else {
            printf("Seu chute foi maior que o numero\n"); 
        }
        tentativas++;
    }
    printf("Fim de jogo\n");
    printf("Voce acertou em %d tentativas\n", tentativas);
}





    // Loop com for, for e usado quando sei quantas vezes quero que repita
    //
    // for(int i = 1; i <= NUMERO_TENTATIVAS; i++) {
    //     printf("Tentativa %d de %d\n", i, NUMERO_TENTATIVAS);
    //     printf("Qual o seu chute\n");
    //     scanf("%d", &chute);
    //     printf("seu chute foi %d \n", chute);

    //     if (chute < 0){
    //         printf("Voce nao pode chutar numeros negativos\n");
    //         i--;
    //         continue;
    //     }

    //     if (chute == numeroSecreto){
    //         printf("Voce acertou\n");
    //         break;
    //     } else if (chute < numeroSecreto){
    //         printf("Seu chute foi menor que o numero\n");
    //     } else {
    //         printf("Seu chute foi maior que o numero\n");
    //     }
    // }


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