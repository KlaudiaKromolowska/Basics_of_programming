#include <stdio.h>
using namespace std;

int main() {
	int i=0;
	float koniec;
	float x=0, suma=0;
	printf("podaj znacznik \"konca\" \n");
	scanf("%f",&koniec);
	do{
			printf("podaj wartosc nr %d\n",i+1);
			scanf("%f",&x);
			suma+=x;
			i++;
	}
	while(x!=koniec);
	printf("koniec=%f suma wynosi %f\n",koniec,suma);
	return 0;
}
