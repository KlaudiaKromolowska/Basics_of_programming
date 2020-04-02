#include <stdio.h>

int main() {
		char nazwa[10];
		int stop=0;
		gets(nazwa); //dzia³a jak scanf
		for (int i=0; i<20; i++){
			if(nazwa[i]!=' '){
				printf("%c", nazwa[i]);
			}else{
				stop=i;
				printf("\n");
			}
		}
	return 0;
}
