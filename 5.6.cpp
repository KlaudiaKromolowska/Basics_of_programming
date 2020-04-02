#include <stdio.h>

int main() {
	int tab[3][10]={};
	int a, b, c, n, w, k;
	for(int i=0; i<10; i++){
			tab[i][0]=i+1;
			tab[i][1]=tab[i][0]*tab[i][0];
			tab[i][2]=tab[i][1]*tab[i][0];
		}
	for(int i=0; i<10; i++){
		for(int j=0; j<3; j++){
		printf("%d ", tab[i][j]);
		}	
		printf("\n");
	}
	
	printf("Podaj mi liczbe, ktora jest szescianem ");
	scanf("%d", &n);
	for (int i=0; i<10; i++){
		if(tab[i][2]==n){
			printf("%d %d", tab[i][0], k=tab[i][1]);	
		}
	}
	return 0;
}
