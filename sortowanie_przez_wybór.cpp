#include <stdio.h>
// sortowanie przez wyb�r polega na znalezieniu najmniejszej liczby ze wszystkich i wstawieniu jej w odpowiednim miejscu.
//https://visualgo.net/bn/sorting
// SELECTION SORT / z�ta ztrza�ka po lewej na dole / SORT / GO
	int wybor(int tab[10]){
		int a, i, j, x;									// i, j do p�tli, a, x bo b�d� potrzebne (dopisane w trakcie programu)
		for (int i=0;i<10;i++){							// p�tla przelatuje nam po wszystkikch liczbach					
			for (j=i+1; j<10;j++){						// p�tla zaczyna sprawdza� czy kt�ra� z liczb nast�puj�cych po wybranej jest od niej mniejsza
				if(tab[j]<tab[i]){						// je�li kolejna liczba jest mniejsza od naszej liczby
					swap(tab[i], swap[j]);
				}
			}
		}	
		for (i=0; i<10; i++){							//wypisujemy :)
			printf("%d ", tab[i]);
		}
	}
	
	
	int main() {
		int tab[]={10,9,8,7,6,5,4,3,2,1};				// delkaracja tablicy
		wybor(tab);
	return 0;
	}
