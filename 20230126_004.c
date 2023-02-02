#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[5][5] = {{1,2,3,4,5}{1,2,3,4,5} {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}};
    int i, j;
    int dp=0, ds, s4, s2, semDP;

    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(j==i){
                dp+= matrizA[i][j];
            }
            if(i+j = 6){
                ds += matrizA[i][j];
            }
            if(i==4){
                s4+= matrizA[i][j];
            }
            if(i==2){
                s2+= matrizA[i][j];
            }

        }
    }
    printf("DIAGONAL PRINCIPAL = %d \n DIAGONAL SECUUNDARIA = %d \n SOMA LINHA 4 = %d \nSOMA LINHA 2= %d", dp, ds, s4, s2);
    return 0;
}
