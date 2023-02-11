#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s1[21], s2[21], letra, c1, c2, copia[21];
	int i, compara=0, cont=0, cont2=0;
	
	printf("*****LETRA A*****\n");
	printf("Digite uma string de ate 20 caracteres: ");
	
	
	printf("\n*****LETRA B*****\n");
	scanf("%20s", &s1);
	
	
	printf("\n*****LETRA C*****\n");
	printf("Digite uma nova string de ate 20 caracteres: ");
	scanf("%20s", &s2);
	printf("COMPARACAO: ");
	for(i=0; i<21; i++){
		if(s1[i]!=s2[i]){
			compara =1;
		}
	}
	if(compara == 1){
		printf("Nao sao iguais\n");
	}
	else printf("Sao iguais");
	
	
	
	
	printf("\n*****LETRA D*****\n");
	printf("CONCATENACAO: %s%s\n", s1, s2);
	
	
	
	printf("\n*****LETRA E*****\n");
	
	printf("Primeira palavra ao contrario: ");
	for(i=0; i<=21; i++){
		if(s1[i] ==000){
			break;
		}
		cont++;
	}	
	
	for(i=cont-1; i>=0; i--){
		printf("%c", s1[i]);
	}
	printf("\n");
	
	
	
	printf("\n*****LETRA F*****\n");
	
	printf("Qual caractere voce deseja buscar na primeira palavra: ");
	scanf(" %c", &letra);
	
	for(i=0; i<21; i++){
		if(s1[i]==letra){
			cont2++;
		}
	}
	printf("O caractere '%c' apareceu %d vezes\n",letra, cont2);
		
		
		
	printf("\n*****LETRA G*****\n");
	
	for(i=0; i<cont; i++){
		copia[i] = s1[i];
	}
	
	printf("Qual caractere voce deseja substituir: ");
	scanf(" %1c", &c1);
	printf("Qual deve ser o novo caractere: ");
	scanf(" %1c", &c2);
	
	for(i=0; i<21; i++){
		if(copia[i]==c1){
			copia[i] = c2;
			break;
		}
	}
	
	printf("%s\n", copia);
	
	
	
	printf("\n*****LETRA H*****\n");
	
	
	printf("\n*****LETRA I*****\n");
	int p1, tamanho;
	printf("A partir de qual posicao voce deseja printar? ");
	scanf("%d", &p1);
	printf("Qual o tamanho? ");
	scanf("%d", &tamanho);
	
	for(i=p1; i<(p1+tamanho); i++){
		printf("%c", s1[i]);
	}
	
	
	
	
	return 0;	
}
