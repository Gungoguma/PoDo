//10797
#include <stdio.h>
main() {
	int i,date, no[5],add=0;
	
	scanf("%d",&date);
	for(i=0;i<5;i++)
	scanf("%d",&no[i]);
	
	for(i=0;i<5;i++)
		if(no[i]%10==date%10)
			add++;
			
	printf("%d",add);
}
