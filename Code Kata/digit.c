#include<stdio.h>
int main()
{
    int a,sum=0;
    scanf("%d",&a);
    while(a>0)
    {
        a=a/10;
        sum=sum+1;
    }    
    printf("%d",sum);
    return 0;
}







