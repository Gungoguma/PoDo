#include <stdio.h>
main() {
	int a,b,c,d,e,one,two,pay;
	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a>b){
		one=b;
		if(b>c)
			one=c;
		else
			one=b;
	}
	else{
		one=a;
		if(a>c)
			one=c;
		else
			one=a;
	}
	
	if(d>e)
		two=e;
	else
		two=d;
		
	pay=one+two;
	printf("%d",pay-50);
}
