#include <stdio.h>
/*ca�y trik polega na wprowadzeniu jeszcze jednej zmiennej pomocniczej - np. x. Za ka�dym przej�ciem p�tli (linijka 11), x zwi�ksza si�, co za tym idzie szukamy j w innych kolumnach.
Gdyby� nie rzoumia�a, wyjasni� bardziej, powodzonka */
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


