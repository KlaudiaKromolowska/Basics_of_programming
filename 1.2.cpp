#include <stdio.h>

void przelicz (int dolar){
	
	float funt;
	funt=dolar/1.6;
	printf("%f", funt);
}	
	
int main() {
	float dolar;
	scanf("%f", &dolar);
	przelicz(dolar);
	
	
	return 0;
}
