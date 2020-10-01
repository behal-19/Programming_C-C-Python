#include<stdio.h>
int main()
{
    char id[10];
    int hours;
    double salary,x; 
    printf("\nInput the Employees ID(Max. 10 chars:");
    scanf("%s",&id);
    printf("\nEnter the Input the working hrs:");
    scanf("%d",&hours);
    printf("\nEnter the Salary amount/hr:");
    scanf("%lf",&salary);
    x=hours*salary;
    printf("The overall salary is %lf",x);
    return 0;
    
}
