#include<stdio.h>
int main()
{
    double w1,n1,w2,n2,a;
    printf("\nEnter the weight of item 1:");
    scanf("%lf",&w1);
    printf("\nEnter the number of item 1:");
    scanf("%lf",&n1);
    printf("\nEnter the weight of item 2:");
    scanf("%lf",&w2);
    printf("\nEnter the number of item 2:");
    scanf("%lf",&n2);
    a=((w1*n1)+(w2*n2))/(n1+n2);
    printf("Avearge is %lf",a);
    return 0;
    
    
}
