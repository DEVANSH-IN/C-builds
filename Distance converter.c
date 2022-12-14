/*#include<stdio.h>
int main()
{
	float km, m ,cm, inch, ft;
	//take Input from user
	print("Please Enter the Distance in Kilometer:-");
	scanf("%f",&km);
	//convert in Cm mtere, inch , ft;
	m     = km*1000;
	cm    = m*100;
	inch  = cm/2.54;
	ft    = inch/12;
	printf("Distance in Meter = %f\n",m);
	printf("Distance In Centimeter= %f\n",cm);
	printf("Distance In Inch = %f\n", inch);
	printf("Distance In Ft = %f\n",ft);
	return 0;
	
	
} */
#include<stdio.h>
int main()
{
    float km, m, cm, inch, ft;
    printf("Please Enter the Distance In Kilometer:-");
    scanf("%f",&km);
    m = km*1000;
    cm = m*100;
    inch = cm/2.54;
    ft = inch/12;
    printf("Distance in meter = %f\n",m);
    printf("Distance in centmeter = %f\n",cm);
    printf("Distance in inch = %f\n",inch);
    printf("Distance in ft = %f\n",ft);
    
}

