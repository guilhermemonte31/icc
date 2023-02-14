/*20230202_002 Implementar uma função que receba uma lista de nomes inseridos pelo usuário
 (até 20 nomes com até 120 caracteres). O usuário pode inserir desde zero até 20 nomes.  Criar funções para;
a) imprimir a lista de nomes
b) Eliminar um nome da lista.
c) Imprimir os nomes da lista em ordem alfabética.
d) Inserir os nomes da lista em outra lista em ordem alfabética.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 120



void imprime(char lista[][max], int tamanho){
	int i;;
	for(i=0; i<tamanho; i++){
		printf("%s\n", lista[i]);
	}
}

void elimina(char lista[][max], int tamanho){
	int i, pos;
	
	printf("Digite a posicao do nome que voce deseja eliminar: ");
	scanf("%i", &pos);
	printf("\nNova lista: \n");
	for(i=0;i<tamanho;i++){
		if(i!=(pos-1)){
			printf("%s ", lista[i]);
		}
	}
}

void ordem(char lista[][max], tamanho){
	int i;
	char primeiro
	
	for(i=0; i<tamanho; i++){
	}
}


void listarNomes(){
	char lista[max][max];
	int j, tamanho;
	
	
	printf("Insira a quantidade de nomes (de 0 a 20): ");
	scanf("%i", &tamanho);
	
	for(j=0; j<tamanho; j++){
		printf("Insira o %d nome: ", j+1);
		scanf(" %[^\n]s", &lista[j]);	
	}
	
	
	imprime(lista, tamanho);
	elimina(lista, tamanho);
	
	
}

int main(){
	char a[max][max];
	int j;
	
	listarNomes();
		
}

