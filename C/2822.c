//2822
#include <stdio.h>
main() {
	int i,j,n,temp,score=0,add[8],bdd[8],cdd[8]={0};
	
	for(i=0;i<8;i++){
		scanf("%d",&add[i]);
		bdd[i]=add[i];
	}
	
	
	for(i=0;i<8;i++)
		for(j=i+1;j<8;j++)
			if(add[i]>add[j]){
				temp=add[i];
				add[i]=add[j];
				add[j]=temp;
			}
			
	for(i=3;i<8;i++)
		score=score+add[i];
	printf("%d\n",score);
	
	for(i=0;i<8;i++){
		for(j=3;j<8;j++)
			if(add[j]==bdd[i])
				cdd[i]=1;
	}

	for(i=0;i<8;i++)
		if(cdd[i]==1)
			printf("%d ",i+1);
}
