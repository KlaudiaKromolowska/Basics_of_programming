#include <stdio.h>

int main() {
	int a, wynik=1;
	scanf("%d", &a);
	for (int i=1; i<=a; i++){
		wynik*=i;
	}
	printf("%d",wynik);
	return 0;
}
