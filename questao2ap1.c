#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float solicitaNumero(){
	float n;
	printf("digite um numero inteiro entre 0 e 1: ");
	scanf("%f", &n);
	while(n<0 || n>1){
		printf("Apenas numero entre 0 e 1, tente novamente:");
		scanf("%f", &n);
	}
	
	return n;
}

float arctan(float n){
	float arct=0, cont=1, rad;
	int cont2=1;
	arct+=n;
	while((pow(n,cont)/cont)>=0.0001){
		cont+=2;
		cont2++;
		if(cont2%2==0){
			arct-= (pow(n,cont)/cont);
		}else{
			arct+= (pow(n,cont)/cont);
		}
	}
	rad = (arct*3.14159)/180;
	return rad;	
}

void imprimeRadianos(float n, float rad){
	printf("O numero %.2f em radianos e igual a %f", n, rad);
} 


int main(){
	float s, arc;
	
	s = solicitaNumero();
	arc = arctan(s);
	imprimeRadianos(s, arc);
}
