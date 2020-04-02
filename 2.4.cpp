#include <iostream>
using namespace std;

int main() {
	double b, c;
	double x;
	printf("Podaj wspolczynniki b i c rownania bx+c=0\n");
	scanf("%lf %lf", &b,&c);
	printf("Twoje rownanie to %d*x+%d=0\n", b,c);
	x=c/b;
	x=-x;
	printf("x=%lf", x);
	
	return 0;
}
