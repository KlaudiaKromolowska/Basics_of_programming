#include <stdio.h>
#include <stdlib.h>

int sortowanie (int tab[]){
	int i,j, a;
	int m;
	for(i=0;i<10;i++) {
		for(j=0;j<9;j++) {
			if(tab[j]> tab[j+1])
			{
				a=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=a;
			}
		}
	}
	for(m=0;m<10;m++) {
		printf("%d \n", tab[m]);
	}
}


int main () {
	int tab[]={10,9,8,7,6,5,4,3,2,1};
	sortowanie(tab);

	return 0;
}
