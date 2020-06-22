#include <stdio.h>
main() {
	int i,j,k;
	
	scanf("%d",&k);
	
	for(i=1;i<=k;i++){
		for(j=k;j>=1;j--){
			if(j<=i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
