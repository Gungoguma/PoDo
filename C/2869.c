#include <stdio.h>
main() {
	int A,B,V,day=0;
	
	scanf("%d %d %d",&A,&B,&V);
	
	day=(V-B-1) / (A-B)+1;
	printf("%d",day);
}
