#include <stdio.h>

void uncjeNaFilizanki(int uncje){
	float filizanki= uncje/8;
	printf("%f", filizanki);
}
int main() {
	int u;
	scanf("%d", &u);
	uncjeNaFilizanki(u);
	return 0;
}
