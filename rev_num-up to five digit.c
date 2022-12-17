// revrese a five digit number 
#include<stdio.h>

int main()
{
    int n, d1,d2,d3,d4,d5;
    //for specific data type...
    long int revnum;
    // Taking the input from user..
    printf("Please Enter the Five digit Number (less than 32767):");
    scanf("%d",&n);
    //revrese the 
    d5 = n%10; //5th digit
    n = n/10; // remaining digit..
    d4 = n%10; //4th digit...
    n = n/10; // remaining digit
    d3 = n%10; //3rd digit 
    n = n/10; //reamining digit 
    d2 = n%10; // 2nd digit...
    n = n/10; //remaining digit
    d1 = n%10; //1st digit 
    n = n%10; //for remaining digit....
    revnum = d5*10000 + d4*1000 + d3*100 +d2*10+d1;
    //specifier %ld is used to print long int value...
    printf("Reverse Number is %ld\n",revnum);
    printf("Thanks For Using our System..!");
    printf("Have A Great day..!");
    return 0;
    
}
