#include<stdio.h>

int main()
{
    double pi=0; 
    int k=1;
    for(double i=1.00000;i<=304500.00000;i=i+2.00000)
    {
       
        if(k%2)
        {
            pi=pi+(4.00000/i);
        }
        else
        {
            pi=pi-(4.00000/i);
        }
        k++;
    }
    printf("%.5f",pi);
	return 0;
}
