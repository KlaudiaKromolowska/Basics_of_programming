#include <stdio.h>
#include <conio.h>

int main() {
	char znak;
	scanf("%c", &znak);	
		if (znak==8){
			printf("BACKSPACE");
		}else if(znak==10){
			printf("ENTER");
		}else 
		printf("INNE");
	return 0;
}
