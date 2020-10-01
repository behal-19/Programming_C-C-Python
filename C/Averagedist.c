#include<stdio.h>
int main()
{
    int dist;
    float fuel,a;
    printf("enter the dist:");
    scanf("%d",&dist);
    printf("enter the fuel:");
    scanf("%f",&fuel);
    a=dist/fuel;
    printf("Average is %0.2f",a);
    return 0;
}
