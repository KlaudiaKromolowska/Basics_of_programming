#include <stdio.h>

int wstawianie(int tab[10]){
	int a, i, j;									//zmienna a jest zmienn� pomocnicz�, i, j - potrzebne do petli (dopisane w trakcie programu)
	for(i=1; i<10; i++){							// p�tla, kt�ra ma przej�� po ka�dej z 10 liczb
		a=tab[i];									// zmienna pomocnicza a, kt�rej przypisujemy warto�� tab[i]
		for (j=i-1; j>=0; j--){						// trudmy for :) Odpwiada za por�wnanie naszej liczby "a" z ka�d� poprzedni�
			if (a<tab[j]){							// je�eli nasze "a" jest mniejsze
				tab[j+1]=tab[j];					// zamieniamy warto�� j+1, czyli w�a�ciwie nasze i (w kolejnych krokach i+1, i+2...), na warto�� tab[j]
			}				
		}
		tab[j+1]=a;									//pierwsze u�yte w p�tli j ma warto�� i-1, ostatnie - 0, dlatego, �eby nie pomin�� �adnej warto�ci, dopisujemy, �e tab[j+1]=a;
	}
	for (i=0; i<10; i++){							//wypisujemy :)
		printf("%d ", tab[i]);
	}
}

int main() {
	int tab[]={10, 9,8,7,6,5,4,3,2,1};				//deklarujemy tablic� 10 zmiennych
	wstawianie(tab);
	
	return 0;
}
/* DZIA�ANIE PROGRAMU DLA 3 PIERWSZYCH LICZB
	int a, i, j;									
	for(i=1; i<10; i++){							// i=1																// i=2
		a=tab[i];									// a=9																// a=8
		for (j=i-1; j>=0; j--){						// j=i-1=0, 														// j=1, czy 8<10, tak, wi�c przypisuje tab[j+1] z tab[j], tab{9,10,10}
			if (a<tab[j]){							// Czy 9 < tab[0] ----> 9 < 10 ? TAK, wi�c p�tla si� wykona			/  j=0, czy 8<9, tak, wi�c przypiuje tab[j+1] z tab[j], tab{9,9,10}
				tab[j+1]=tab[j];					// tab[1]=tab[0]	--> nasza tablica wygl�da tak:{10,10,8}			/ 
			}										
		}
		tab[j+1]=a;									//j w 26 linijce zyska�o warto�� -1, ale petla sie juz nie wykonala,
													// teraz tablica wygl�da tak: {9,10,8}								// teraz wygl�da tak: {8, 9, 10}
	}
i tak dalej.... */


/* ZADANKO :) 
Napisz program, kt�ry b�dzie ustawia� wymy�lon� przez Ciebie tablic� co najmniej 5 liczb, w kolejno�ci malej�cej 
*/
