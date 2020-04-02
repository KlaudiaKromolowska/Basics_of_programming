#include <stdio.h>

int main() {
	int T1[]={5,6,2,2,3};
	int T2[]={0,1,2,3,4};
	int T3[5];
	
	for (int i=0; i<5;i++){
		T3[i]=T2[i]+T1[i];
		printf("%d	", T3[i]);
	}
	return 0;
}
