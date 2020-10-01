#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter:");
    scanf("%d",&x);
    printf("Enter:");
    scanf("%d",&y);
    if (y%x==0)
    {
        printf("Number is multiplied");
    }
    else
    {
        printf("Number is not multiplied");
    }
    return 0;
}
