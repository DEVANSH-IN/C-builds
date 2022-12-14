//calculate the simple interest input by user....
#include<stdio.h>
#include<conio.h>
int main()
{
	int p,n;
	float r,si;
	printf("Enter the values of p,n,r");
	scanf("%d%d%f", &p,&n,&r);
	si = p*n*r/100;
	printf(" Your Interest is:-%f\n",si);
	
}
