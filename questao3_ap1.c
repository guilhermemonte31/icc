#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int solicitaNumero(){
    int n;

    printf("digite um numero positivo: ");
    scanf("%d", &n);
    while(n<0){
        printf("digite um numero positivo: ");
        scanf("%d", &n);
    }
    return n;
}

int hiperfatorial(int n){
    int cont, hiperf=1;

    if(n==0){
        hiperf = 1;
    }
    else{
        for(cont=1; cont<=n; cont++){
            hiperf *= pow(cont,cont);
        }
    }
    return hiperf;
}

void imprimeResult(int n, int h){
    printf("o hiperfatorial de %d eh %d", n, h);
}

int main(){
    int n, h;

    n = solicitaNumero();
    h=hiperfatorial(n);
    imprimeResult(n, h);
}






