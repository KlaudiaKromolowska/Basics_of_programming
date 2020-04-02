#include <stdio.h>

int main() {
	int a;
	scanf("%d",&a);
	if ((a<1)||(a>10))
		printf("Liczba spoza przedzialu 1-10. Dziekujemy");
	else
		printf("Nieprawidlowa wartosc!");
	return 0;
}
