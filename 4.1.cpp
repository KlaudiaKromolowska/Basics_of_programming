#include <stdio.h>
using namespace std;

void srd(float a){
	float sr=a/10;
	printf("%f", sr);
}

int main() {
	float tab[10],sum, sr;
	for (int i=0; i<10; i++){
		scanf("%f", &tab[i]);
		sum+=tab[i];
		
	}
	srd(sum);
	return 0;
}
