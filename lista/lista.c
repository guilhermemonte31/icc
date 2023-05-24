#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void criaLista(Lista lista){
    int quant;
    printf("\nQual a quantidade de elementos da lista? ");
    scanf("%d", &quant);
    lista->quantidade = quant;
}

void liberaLista(Lista lista){
    free(lista);
}

void insereElementos(Lista lista){
    int i;
    for(i=0; i<lista.quantidade; i++){
        printf("\nDigite o valor da posicao %d", i);
        scanf("%d", &lista.vetor[i]);
    }
    for(i=0; i<lista.quantidade; i++){
        printf("%d ", lista.vetor[i])
    }
    printf("\n");

}

void insereEmOrdem(Lista lista){
    int i, valor=0;
    for(i=0; i<lista.quantidade; i++){
        printf("\nDigite o valor da posicao %d: ", i);
        scanf("%d", &lista.vetor[i]);
        while(lista.vetor[i]< lista.vetor[i-1]){
            printf("Digite um valor valido= ");
            scanf("%d", &lista.vetor[i]);
        }
    }
    for(i=0; i<lista.q)

}
