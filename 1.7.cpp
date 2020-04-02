#include <stdio.h>
using namespace std;

int main() {
	char a;
	int x,y;
	scanf("%c", &a);
	scanf("%d %d", &x, &y);
	if (a=='+'){
		printf("%d", x+y);
	}else{
		printf("%d", x-y);
	}
	return 0;
}
