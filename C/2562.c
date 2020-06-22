#include <stdio.h>
main() {
	int a[9];
	int i, max = 0, num = 1, maxnum;
	for(i = 0; i < 9; i++) 
		scanf("%d", &a[i]);
	
	for(i = 0; i < 9; i ++){
		if(a[i] > max){
			max = a[i];
			maxnum = num;
		}
		num++;
	}
	printf("%d\n%d",max,maxnum);
}
