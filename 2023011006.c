#include <stdio.h>
#include <stdlib.h>



int transformaBinario(int decimal){
	int resto=0, binario=0;
	
	printf("O numero %d em binario vai ser: ", decimal);
	
	while(decimal!=0){
		if(decimal%2==1){
			printf("1");
		}else printf("0");
		decimal/=2;
	}
	
	return binario;
}

int main(){
	int decimal, teste;
	
	printf("digite o numero em decimal: ");
	scanf("%d", &decimal);
	teste=transformaBinario(decimal);
	
}
