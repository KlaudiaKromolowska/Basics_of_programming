#include <iostream>
using namespace std;

int main() {
	int n, suma, x;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%d", &x);
		suma+=x;
	}
	printf("Suma = %d", suma);
	return 0;
}
