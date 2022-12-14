//paper of size A0 is Dimensions 1189mm * 841 mm Each subsequent size A(n) is defined as A(n-1) cut in half parallel to it's shorter size . Thus paper A1 would have demensions 841 mm * 594 mm 
//write a program to calculate and print paper size
#include<stdio.h>
int main()
{
	// A0 1189mm x 841
	//A1 841 mm x 594mm
	//initialization of variable 
	int i , height, width, tem;
	//fixed value of A(0) paper 
	height = 1189;
	width = 841;
	//loop is used for increment the value each time 
	for(i=0; i<=8; i++)
	{
		// prefernce matter here 
		printf("\nA %d: %d X %d ", i,height, width);
		// we convert height into tem 
		tem = height;
		//as according to question  height = width
	    height = width; 
	    // width 
	    width = tem/2;
	}
	return 0;
}
