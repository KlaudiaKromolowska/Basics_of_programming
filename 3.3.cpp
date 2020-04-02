#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	//int dl=100;
	char znaki[10], zmienione[10];
	scanf("%s", &znaki);
	int dl=strlen(znaki);
	for (int i=0; i<dl; i++){
		zmienione[i]=znaki[dl-i-1];
	}
	printf("%s", zmienione);
	return 0;
}
