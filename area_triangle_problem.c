// if the lenght of a triangle are input throught the keyboard write a program to find the area of triangle..
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, sp, area;
    printf("\nplease Enter The lenght Of A of a Triangle:");
    scanf("%f",&a);
    printf("\nplease Enter The lenght Of B of a Triangle:");
    scanf("%f",&b);
    printf("\nplease Enter The lenght Of C of a Triangle:");
    scanf("%f",&c);
    sp = (a+b+c)/2;
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area Of Triangle = %f",area);
    return 0;
}


