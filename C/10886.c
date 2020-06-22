//10886
#include <stdio.h>
main() {
	int i,j=0,n=0,k,add;
	
	scanf("%d",&add);
	for(i=0;i<add;i++){
		scanf("%d",&k);
		if(k==1)
			j++;
		if(k==0)
			n++;
	}
	if(j>n)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");
}
