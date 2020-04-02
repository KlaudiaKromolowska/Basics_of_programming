#include <stdio.h>

int main() {
	int tab[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int pomoc;
	int n=10;
//	int n=sizeof(tab)/sizeof(int);
//	printf("%d\n", n);
	for (int i=0; i<n/2; i++){	
		pomoc=tab[i];				
		tab[i]=tab[n-i-1];		
		tab[n-i-1]=pomoc;			
	}
	for (int i=0; i<n; i++){
		printf("%d", tab[i]);
	}
	return 0;
}
