#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("\nEnter:");
    scanf("%d",&a);
    printf("\nEnter:");
    scanf("%d",&b);
    printf("\nEnter:");
    scanf("%d",&c);
    if ((a>b) && (a>c))
    {
    printf("Largest is %d",a);
    }
    else if ((b>a) && (b>c))
    {
    printf("Largest is %d",b);
    }
    else
    {
    printf("Largest is %d",c);
    }
    return 0;
}
