#include <stdio.h>
main() {
	int num[30];
	int good[28];
	int i,k;
	int j=0;
	int temp;
	
	for(i=1;i<=30;i++){
		num[j]=i;
		j++;
	}
		
	
	for(i=0;i<28;i++){
		scanf("%d",&good[i]);
	}
	
	for(i=0;i<28;i++){
		for(k=0;k<30;k++){
			if(good[i]==num[k])
				num[k]=0;
		}
	}
	
	for(i=0;i<30;i++){
		if(num[i]!=0)
			printf("%d\n",num[i]);
	}
}
