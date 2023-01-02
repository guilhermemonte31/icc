#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, x, y,teste, equacao, xMax, yMax;
    
    printf("digite os valores de m, para x, e n, para y, respectivamente:");
    scanf("%d %d", &m, &n);
    
    xMax=0;
    yMax=0;
    teste=0;
    for(x=0; x<=m; x++){
    	for(y=0; y<=n; y++){
    		equacao = (x*y)-(x*x)+y;
			if(equacao>teste){
				teste=equacao;
				yMax=y;
				xMax=x;
			}	
		}
	}
	printf("MAIOR VALOR DE X: %d\nMAIOR VALOR DE Y: %d\n MAIOR VALOR DA FUNCAO: %d", xMax, yMax, equacao);
	
    return 0;
}
