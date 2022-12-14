//calculate the gross salary of Rajesh his dearness Amount is 40% of base salary House rent allownace is 20% of base salary....
#include<stdio.h>
int main()
{
	float base_pay, da, hra, grpay;
	printf("Enter the basic salary of Ramesh:");
	scanf("%f",&base_pay);
	da = 0.4*base_pay;
	hra = 0.2*base_pay;
	grpay = base_pay+da+hra;
	printf("Base salary of Ramesh = %f\n",base_pay);
	printf("Dareness Allowance = %f\n", da);
	printf("House Rent Allowance= %f\n",hra);
	printf("Gross Pay Of Ramesh is %f\n",grpay);
	return 0;
}
