#include<stdio.h>
int main()
{
    int x;
    printf("Enter:");
    scanf("%d",&x);
    if(x>0 && x<=20)
    {
        printf("The range is [0,20]");
    }
    else if(x>20 && x<=40)
    {
        printf("The range is [0,40]");
    }
    else if(x>40 && x<=60)
    {
        printf("The range is [0,60]");
    }
    else if(x>60 && x<=80)
    {
        printf("The range is [0,80]");
    }
    else
    {
        printf("Out of range");
    }
    return 0;
}
    



















