#include<stdio.h>
int main()
{
    //calculate parimeter of rectangle And it's Area...
    //formula 2(l+b) for--- perimeter of Rectangle 
    //formula (l*b) Area of Rectangle
    // variable initalization  
    int l, b, area, peri, r;
    float circle_area, circle_cir, pi =3.14;
    
    printf("Please Enter the Length Of Rectangle = ");
    scanf("%d", &l);
    printf("Please Enter The Breath Of Rectangle = ");
    scanf("%d",&b);
    //taking input from user for storing Radius of Circle for calculation...
    printf("Please Enter the Radius Of Circle:");
    scanf("%d",&r);
    //Area of Circle 
    circle_area = pi*r*r;
    //circumfrence of circle is....
    circle_cir = 2*pi*r;
    //formula of perimater of rectangle
    peri = 2*( l  + b );
    //formula of Area of Rectengle
    area = l * b;
    //show output of Perimeter
    printf("Perimeter Of Rectengle is = %d\n",peri);
    //show output of Area of rectangle..
    printf("Area Of Rectengle is = %d\n",area);
    //show Output of Area of circle
    printf("Area of Circle is = %f\n",circle_area);
    //show Output of circumfrence of circle.....
    printf("circumfrence Of Circle = %f\n",circle_cir);
    //return 0 represent that our program rum successfully..
    return 0;
}
