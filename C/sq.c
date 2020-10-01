#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,k;
    printf("Enter:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if (i%2==0)
        {
             printf("\n\tthe square of %d is %d",i,i*i);
        }
    }
    return 0;
}
