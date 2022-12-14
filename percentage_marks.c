//calculate the aggregate & percentage marks
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,aggr;
	float per;
	Printf("\n Enter the marks in 5 subject:-");
	scanf("%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);
	aggr = m1+m2+m3+m4+m5;
	per = aggr/5;
	
    return 0;
 }
