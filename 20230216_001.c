/*20230216_001. Fa�a um programa criar a forma��o de uma equipe de futebol para um jogo. Os requisitos d�o:
- A equipe tem 23 jogadores.
- Cada jogador tem uma fun��o (3-Goleiro, 7-Defensa, 8-M�dio Campo, 5-Atacante) .
- Cada jogador tem uma avalia��o entre 0 e 10
a) Crie usando array as estruturas necess�rias para representar essa informa��o num programa em C.
b) Inicializar as estruturas com os dados de uma equipe. Pode usar a informa��o do Flamengo (https://www.flamengo.com.br/elencos/elenco-profissional)
c) Crie e imprima uma forma��o  (1-Goleiro, 4-Defensa, 4-M�dio Campo, 2-Atacante) para o jogo selecionado os jogadores em cada fun��o com melhor avalia��o.*/

#include <stdio.h>
#include <string.h>


int main(){

    char jogadores[23][120] = {"Felipe Alves", "Jandrei", "Rafael", "Rafinha", "Igor Vinicius",
    "Welington", "Arboleda", "Ferraresi", "Beraldo", "Diego Costa",
    "Nestor", "Neves", "Luan", "Pablo Maia" , "Mendez", "Galoppo", "Welington Rato", "Talles",
    "Calleri", "Luciano", "Marcos Paulo", "David", "Erison"};

    char posicao[23] = {'G', 'G', 'G', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'M', 'M', 'M', 'M',
    'M', 'M', 'M', 'M', 'A', 'A', 'A', 'A', 'A'};

    float avaliacao[23] = {7, 8, 7, 7, 8, 6.5, 8.5, 8, 7.5, 8, 7.5, 7.5, 7, 7, 8, 9, 9.5, 6.5, 8.5, 8, 6.5, 6, 4};

    int i, j;
    float maiorNotaG=0, maiorNotaD=0, maiorNotaM=0, maiorNotaA=0;
    char melhorG[120], melhorM[120], melhorD[120], melhorA[120];
    char titulares[11][120];

    for(i=0; i<23; i++){
        if(posicao[i] == 'G'){
            if(avaliacao[i] > maiorNotaG){
                maiorNotaG=avaliacao[i];
                strcpy(melhorG, jogadores[i]);
            }
        }else{
            if(posicao[i] == 'D'){
                if(avaliacao[i]>maiorNotaD){
                    maiorNotaD=avaliacao[i];
                    strcpy(melhorD, jogadores[i]);
                }
            }else{
                if(posicao[i] == 'M'){
                    if(avaliacao[i]>maiorNotaM){
                        maiorNotaM=avaliacao[i];
                        strcpy(melhorM, jogadores[i]);
                    }
                }else{
                    if(posicao[i] == 'A'){
                        if(avaliacao[i]>maiorNotaA){
                            maiorNotaA=avaliacao[i];
                            strcpy(melhorA, jogadores[i]);
                        }
                    }
                }
            }
        }
    }
    printf("%s/n %s/n %s/n %s/n", melhorG, melhorD, melhorM, melhorA);
    return 1;
}
