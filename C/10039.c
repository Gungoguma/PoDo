#include <stdio.h>
main() {
	int a,b,c,d,e,f;
	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a<40)
		a=40;
	if(b<40)
		b=40;
	if(c<40)
		c=40;
	if(d<40)
		d=40;
	if(e<40)
		e=40;
	f=(a+b+c+d+e)/5;
	printf("%d",f);
}
