#include<stdio.h>
int main()
{
    //inisilasation of variable---
    float fahrenheit, celsius;
    //Taking input from user
    printf("Please Enter the Temperature Of Your City In Fahrenheit:-");
    scanf("%f",&fahrenheit);
    //formula convert fahrenheit into celsius
    celsius = ((fahrenheit-32)*5)/9;
    //show the output of out program----
    printf("Temperature In your City in Celsius:-%f\n",celsius);
    return 0;
}
