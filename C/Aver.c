#include<stdio.h>
int main()
{
    float num[5];
    int j, p=0,x,t=0;
    printf("Enter:");
    scanf("%f",&num[0]);
    printf("Enter:");
    scanf("%f",&num[1]);
    printf("Enter:");
    scanf("%f",&num[2]);
    printf("Enter:");
    scanf("%f",&num[3]);
    printf("Enter:");
    scanf("%f",&num[4]);
    for(j=0;j<5;j++)
    {
        if(num[j]>0)
        {
            p++;
            t=t+num[j];
        }
    x=t/p;
    }
printf("average=%d",x);
return 0;
}
