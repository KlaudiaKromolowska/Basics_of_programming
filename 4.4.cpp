#include <stdio.h>

int main() {
	int opcja;
	float a, b, wynik;
	printf("Zamieniaj\n1. stopy na metry\n2. metry na stopy\n3. uncje na funty\n4. funty na uncje\n5. koniec\nWybierz polecenie: ");
	scanf("%d", &opcja);
	while (opcja!=5){
		printf("\n Ile? ");
		switch(opcja){
			case 1:
				scanf("%f", &b);
				a=b/3.2808;
				printf("%f\n",a);
				break;
			case 2:
				scanf("%f", &b);
				a=b*3.2808;
				printf("%f\n",a);
				break;
			case 3:
				scanf("%f", &b);
				a=b/0.0625;
				printf("%f\n",a);
				break;
			case 4:
				scanf("%f", &b);
				a=b*0.0625;
				printf("%f\n",a);
				break;
		}
		
		scanf("%d", &opcja);
	}
	return 0;
}
