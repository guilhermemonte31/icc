#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
	int matriz1[MAX][MAX];
	int matriz2[MAX][MAX];
	int matriz3[MAX][MAX];
	int l, c, i, j;
	
	printf("Digite a quantidade de linhas e colunas das matrizes 1 e 2: ");
	scanf("%d %d", &l, &c);
	
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			printf("\nDigite o valor [%d] [%d] da matriz 1: ", i, j);
			scanf("%d", &matriz1[i][j]);
		}
	}
	
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			printf("\nDigite o valor [%d] [%d] da matriz 2: ", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	
	printf("\nA soma das matrizes 1 e 2 gera a matriz: \n");
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
			printf("%d ", matriz3[i][j]);
		}
		printf("\n");
		
	}
	
}
