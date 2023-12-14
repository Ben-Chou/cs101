#include<stdio.h>

int main()
{
	int i=12345,a,b,ans,c,d;
	if(i/1000)
		a=i/1000-i/10000*10;
	else
		a=0;
	b=i-i/10*10;
	c=i/100-i/1000*10;
	d=i/10-i/100*10;
	ans=i-a*1000-c*100-d*10-b+b*1000+c*100+d*10+a;
	printf("%d",ans);
	return 0;
}
