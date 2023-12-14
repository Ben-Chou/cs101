#include<stdio.h>

int main()
{
	int i=1599,k,h;
	if(i<1500)
		printf("70元");
	else
		{
			k=i-1500;
			h=k%100;
			k=k/100;
			if(h)
				printf("%d元",70+(k+1)*10);
			else
				printf("%d元",70+k*10);
		}
	return 0;
}
