#include <iostream>

using namespace std;

int main() {
	int liczba;
	printf("Podaj liczbe aby sprawdzic czy dzieli sie przez 3\n");
	scanf("%d", &liczba);
	switch(liczba%3){
		case 1:
			liczba%3==1;
			printf ("Liczba %d nie dzieli sie przez 3\n", liczba);
			break;
		case 2:
			liczba%3==2;
			printf ("Liczba %d nie dzieli sie przez 3\n", liczba);
			break;
	}
	printf ("Liczba %d dzieli sie przez 3\n", liczba);
	return 0;
}
