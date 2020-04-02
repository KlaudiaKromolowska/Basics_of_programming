#include <stdio.h>

int main() {
	int tab[5], max=0;
	for (int i=0; i<5; i++){
		scanf("%d", &tab[i]);
	}
	54732
	
	
	
	for (int i=0; i<5; i++){
		if (tab[i]>max){
			max=tab[i];
		}
	}
	printf("Najwieksza liczba to %d", max);
	return 0;
}
