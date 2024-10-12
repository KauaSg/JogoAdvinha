#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  
    printf("*    ##     #####    ##   ##   ####    ##   ##  ##   ##    ##   *\n");
    printf("*   ####     ## ##   ##   ##    ##     ###  ##  ##   ##   ####  *\n");
    printf("*  ##  ##    ##  ##   ## ##     ##     #### ##  ##   ##  ##  ## *\n");
    printf("*  ##  ##    ##  ##   ## ##     ##     ## ####  #######  ##  ## *\n");
    printf("*  ######    ##  ##    ###      ##     ##  ###  ##   ##  ###### *\n");
    printf("*  ##  ##    ## ##     ###      ##     ##   ##  ##   ##  ##  ## *\n");
    printf("*  ##  ##   #####       #      ####    ##   ##  ##   ##  ##  ## *\n");


    //Criaçao do numero randomico onde time conta os segundos de 1970 ate hoje e srand muda a funçao incluindo os segundos e rand executa a funçao
    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;


    int chute;
    int tentativas = 1;
    double pontos = 1000.0;

    int numeroTentativas;
    int nivel;
    printf("escolha o nivel 1 = Facil, 2 = Medio, 3 = Dificil");
    scanf("%d", &nivel);

    if (nivel == 1){
        numeroTentativas = 15;
    } else if(nivel == 2){
        numeroTentativas = 10;
    } else{
        numeroTentativas = 5;
    }
    

    // while com condiçao 1 fica infinito antes estava variavel ganhou == 0
    for(int i = 1; i <= numeroTentativas; i++) {
        printf("---------------------------\n");
        printf("Tentativa %d de %d \n", tentativas, numeroTentativas);
        printf("Qual o seu chute\n");
        scanf("%d", &chute);
        printf("seu chute foi %d \n", chute);

        if (chute < 0){
            printf("Voce nao pode chutar numeros negativos\n");
            continue;
        }

        if (chute == numeroSecreto){           
            break;
        } else if (chute < numeroSecreto){
            printf("Seu chute foi menor que o numero\n");
        } else {
            printf("Seu chute foi maior que o numero\n"); 
        }
        tentativas++;
        double pontoPerdidos = abs(chute - numeroSecreto) / (double)2.0;
        pontos = (pontos - pontoPerdidos);
    }

    printf("Fim de jogo\n");

    if (chute == numeroSecreto){           
        printf("Voce acertou em %d tentativas\n", tentativas);
        printf("Fim de jogo\n");
        printf("Totais de pontos %.2f\n", pontos); 
    } else{
        printf("Voce perdeu\n");
    }

}




    // codigo pronto com while
    // while (1) {

    //     printf("---------------------------\n");
    //     printf("Tentativa %d\n", tentativas);
    //     printf("Qual o seu chute\n");
    //     scanf("%d", &chute);
    //     printf("seu chute foi %d \n", chute);

    //     if (chute < 0){
    //         printf("Voce nao pode chutar numeros negativos\n");
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
    //     tentativas++;
    //     double pontoPerdidos = abs(chute - numeroSecreto) / (double)2.0;
    //     pontos = (pontos - pontoPerdidos);
    // }
    // printf("Fim de jogo\n");
    // printf("Voce acertou em %d tentativas\n", tentativas);
    // printf("Totais de pontos %.2f\n", pontos);



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