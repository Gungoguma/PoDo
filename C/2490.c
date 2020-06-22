//2490
#include <stdio.h>
main() {
	int add[3][4];
	int score[3]={0},i,j;
	
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&add[i][j]);
	
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			score[i]=score[i]+add[i][j];
	
	for(i=0;i<3;i++){
		if(score[i]==0)
			printf("D");
		else if(score[i]==1)
			printf("C");
		else if(score[i]==2)
			printf("B");
		else if(score[i]==3)
			printf("A");
		else if(score[i]==4)
			printf("E");
		if(i!=2)
			printf("\n");
	}
}
