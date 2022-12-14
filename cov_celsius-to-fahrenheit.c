#include<stdio.h>
int main()
{
    float fahrenheit, celsius;
    //taking intput from The user 
    printf("Please Enter The Tempreture of your city In Celsius:-");
    scanf("%f",&celsius);
    //formula of converting celsius to fahrenheit---
    fahrenheit =( (celsius*9)/5)+32;
    //showing output to user
    printf("Tempreture of your City in Fahrenheit:-%f\n", fahrenheit);
    return 0;
    
}
