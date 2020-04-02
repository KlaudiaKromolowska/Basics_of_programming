#include <stdio.h>


int main() {
	int tab[3][3][3];
	int numer=1, suma=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
				tab[i][j][k]=numer;
				numer++;
				suma=suma +numer;
				printf("%d ", tab[i][j][k]);
			}
		}
	}
	printf("\n%d", suma);
	return 0;
}
