#include<stdio.h>

int main()
{
	int x=1;
	for(int y=1;y<=9;y++)
	{
		printf("%d*%d=%d\t",y,1,y*1);
		printf("%d*%d=%d\t",y,2,y*2);
		printf("%d*%d=%d\t",y,3,y*3);
		printf("%d*%d=%d\t",y,4,y*4);
		printf("%d*%d=%d\t",y,5,y*5);
		printf("%d*%d=%d\t",y,6,y*6);
		printf("%d*%d=%d\t",y,7,y*7);
		printf("%d*%d=%d\t",y,8,y*8);
		printf("%d*%d=%d\t",y,9,y*9);
		printf("\n");
	}
	return 0;
}
