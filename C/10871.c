//10871
#include <stdio.h>
main() {
	int add[10000]={0},bdd[10000]={0};
	int n,x,i,j=-1;
	
	scanf("%d %d",&n,&x);
	for(i=0;i<n;i++){
		scanf("%d",&add[i]);
		if(add[i]<x)
			printf("%d ",add[i]);
	}
}
