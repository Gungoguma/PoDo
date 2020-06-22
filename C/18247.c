#include <stdio.h>
main() {
	int num[20];
	int nu[20];
	int i,j,n;
	
	scanf("%d",&i);
	for(n=0;n<i;n++)
		scanf("%d %d",&num[n],&nu[n]);
		
	for(n=0;n<i;n++){
		if(num[n]<12||nu[n]<4)
			printf("-1\n");
		else
			printf("%d\n",11*nu[n]+4);
	}
}
