#include <iostream>
using namespace std;

int main() {
	float a,b, p;
	int wybor;
	printf("Wybierz opcje: \n 1. Kolo \n 2.Prostokat\n");
	scanf("%d", &wybor);
	switch(wybor){
		case 1:
			scanf("%f", &a);
			p=3.14*a*a;
			printf("pole wynosi %f", p);
			break;
		case 2:
			scanf("%f %f", &a, &b);
			p=a*b;
			printf("pole wynosi %f", p);
			break;
	}
	
	return 0;
}
