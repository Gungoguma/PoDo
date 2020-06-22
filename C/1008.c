#include <stdio.h>
main() {
	double i,j;
	double n;
	
	scanf("%d %d",&i,&j);
	n = (double)i / j;
	
	printf("%.9lf",n);
}
