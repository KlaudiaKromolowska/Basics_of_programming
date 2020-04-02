#include <iostream>

using namespace std;
int main() {
	unsigned u;
	printf("Wprowadz liczbe osemkowo:\n");
	scanf("%o",&u);
	printf("Odpowiednik dziesietny: %u",u);
	printf("\nOdpowiednik szesnastkowy: %x",u);
	return 0;
}
