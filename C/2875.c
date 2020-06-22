#include <stdio.h>
main() {
	int g,b,k,i=0;
	
	scanf("%d %d %d",&g,&b,&k);
	
	while(1){
		if(g<2||b<1){
			printf("0");
			break;
		}
		g=g-2;
		b=b-1;
		i=i+1;
		if(g<2||b<1||g+b<k){
			if(g+b<k)
				printf("%d",i-1);
			else
				printf("%d",i);
			break;
		}
	}
}
