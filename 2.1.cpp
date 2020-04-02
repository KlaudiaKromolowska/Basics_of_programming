#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
	double a,b,c;
	scanf("%lf %lf", &a, &b);
	c=pow(pow(a,2)+pow(b,2), 0.5);
	printf("%lf", c);
	return 0;
}
