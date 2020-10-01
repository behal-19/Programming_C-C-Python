#include<stdio.h>
int main()
{
    float num[5];
    int j,p=0,k=0;
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
        if(num[j]>0){
            p++;
        }
        else if (num[j]<0)
        {
            k++;
        }
    }
    printf("\nPositive numbers are:%d",p);
    printf("\nNegative numbers are:%d",k);
    return 0;
}
