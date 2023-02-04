#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int m1[2][3] = {{1,2, 2},{3,2,4}};
	int m2[3][2] = {{4,1},{1,2}, {2,3}};
	int m3[2][2] = {{0,0}, {0,0}};
	int i,j,c ;
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			for(c=0; c<3; c++){
				m3[i][j]+= m1[i][c]*m2[c][j];
			}
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
