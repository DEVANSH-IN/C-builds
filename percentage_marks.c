//calculate the aggregate & percentage marks
#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5, aggr;
    float per;
    printf("\n Enter the marks in Subject 1:-");
    scanf("%d", &sub1);
     printf("\nEnter the marks in Subject 2:-");
    scanf("%d",&sub2);
     printf("\n Enter the marks in Subject 3:-");
    scanf("%d", &sub3);
     printf("\n Enter the marks in Subject 4:-");
    scanf("%d", &sub4);
     printf("\n Enter the marks in Subject 5:-");
    scanf("%d", &sub5);
    aggr = sub1+sub2+sub3+sub4+sub5;
    per  = aggr/5;
    printf("Aggregate Marks = %d\n",aggr);
    printf("Percentage of Marks = %f\n", per,"%");
    return 0;
     
    
    
}
