#include<stdio.h>
int main()
{
    int n1,n2,q,r;
    printf("Enter the divident:");
    scanf("%d",&n1);
    printf("Enter the divisor:");
    scanf("%d",&n2);
    q=n1/n2;
    r=n1%n2;
    printf("The quo=%d and rem=%d",q,r);
}
