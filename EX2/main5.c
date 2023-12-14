#include<stdio.h>

int main()
{
	int i=300;
	int h=i%30;
	if(i<=30)
		printf("免費");
	else if(i>=240)
		printf("240元");
	else 
	{
		i=i/30;
		if(h)
			printf("%d元",(i+1)*30);
		else
			printf("%d元",i*30);
	}
	return 0;
}
