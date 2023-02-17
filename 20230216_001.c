/*20230216_001. Fa�a um programa criar a forma��o de uma equipe de futebol para um jogo. Os requisitos d�o:
- A equipe tem 23 jogadores.
- Cada jogador tem uma fun��o (3-Goleiro, 7-Defensa, 8-M�dio Campo, 5-Atacante) .
- Cada jogador tem uma avalia��o entre 0 e 10
a) Crie usando array as estruturas necess�rias para representar essa informa��o num programa em C.
b) Inicializar as estruturas com os dados de uma equipe. Pode usar a informa��o do Flamengo 
(https://www.flamengo.com.br/elencos/elenco-profissional)
c) Crie e imprima uma forma��o  (1-Goleiro, 4-Defensa, 4-M�dio Campo, 2-Atacante) para o jogo 
selecionado os jogadores em cada fun��o com melhor avalia��o.*/

#include <stdio.h>
#include <string.h>

void melhorGoleiro(char goleiro[3][120], float avGol[3]){
	int i, posicao;
	float maiorNota=0;
	char melhorGoleiro[120];
	
	for(i=0; i<3; i++){
		if(avGol[i]>maiorNota){
			maiorNota = avGol[i];
			posicao=i;
		}
	}
	strcpy(melhorGoleiro, goleiro[posicao]);
	printf("\n%s (%.1f)\n", melhorGoleiro, avGol[posicao]);
}

/*void melhorDef(char defesa[7][120], float avDef[7]){
	
}*/

int main(){
	
	//jogadores
	char goleiro[3][120] = {"Felipe Alves", "Jandrei", "Rafael"};
	char defesa[7][120] = {"Rafinha", "Igor Vinicius","Welington", "Arboleda", "Ferraresi", "Beraldo", "Diego Costa"};
	char meio[8][120] = {"Nestor", "Neves", "Luan", "Pablo Maia" , "Mendez", "Galoppo", "Welington Rato", "Talles"};
    char ataque[5][120] = {"Calleri", "Luciano", "Marcos Paulo", "David", "Erison"};
    
    //avaliações
    float avGol[3]= {7.5, 6, 7};
	float avDef[7]= {7, 7.5, 6.5, 8.5, 8, 7, 8};
	float avMeio[8]= {7, 6, 6.5, 6, 7.5, 8.5, 9.5, 6};
	float avAta[5]= {8.5, 7.5, 6, 6.5, 4}; 

	//chama funções para pegar os melhores
    melhorGoleiro(goleiro, avGol);
    melhorDefesa(defesa, avDef);
	melhorMeio(meio, avMeio);
	melhorAta(ataque, avAta);
    
    return 1;
}

