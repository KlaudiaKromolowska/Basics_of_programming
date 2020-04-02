#include <stdio.h>
/*ca³y trik polega na wprowadzeniu jeszcze jednej zmiennej pomocniczej - np. x. Za ka¿dym przejœciem pêtli (linijka 11), x zwiêksza siê, co za tym idzie szukamy j w innych kolumnach.
Gdybyœ nie rzoumia³a, wyjasniê bardziej, powodzonka */
int main() {
	int wys, szer;
	printf("Podaj mi wysokosc i szerokosc figury: ");
	scanf("%d", &wys);
	scanf("%d", &szer);	
	int i, j;
	int x=0;
	for (i=0; i<wys;i++){
		for (j=0; j<szer; j++){
			if(j==x || j==szer-1-x){
				printf("X");
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
		x++;
	}
	return 0;
}


