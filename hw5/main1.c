#include<stdio.h>

int main()
{
	int k=7;
	for(int i=1;i<=7;i++)
	{
		for(int j=i;j<7;j++)
			printf(" ");
		for(int h=0;h<i;h++)
			printf("%d ",i);
		printf("\n");
	}
	return 0;
}
