#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=0;
    float media, maior, menor, soma, mediaArit;

    printf("digite uma media: ");
    scanf("%f", &media);
    maior=media;
    menor=media;

    while(media>=0){
        soma +=media;
        n++;
        if(media<menor) menor = media;
        if(media>maior) maior = media;
        printf("digite uma media: ");
        scanf("%f", &media);
    }
    mediaArit=soma/n;
    printf("MAIOR= %.2f \MENOR= %.2f MEDIA= %.2f", maior, menor, mediaArit);


}
