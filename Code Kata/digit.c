#include<stdio.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        a=a/10;
        sum++;
    }    
    printf("%d",sum);
    return 0;
}





