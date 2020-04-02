#include <iostream>

using namespace std;

int main() {
	float x,y;
	scanf("%f %f", &x, &y);
	if ((y<10*x) || (y>-x*x+6) ||(y<x*x*x+3))
		printf("Nie nalezy");
	else 
		printf("Nalezy");
	return 0;
}
