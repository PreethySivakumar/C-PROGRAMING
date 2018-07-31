#include <stdio.h>
int main()
{
    int n, rev=0,rem,sum;
    scanf("%d", &n);

    sum = n;
    while( n!=0 )
    {
        rem= n%10;
        rev=rev*10 +rem;
        n /= 10;
    }
    if (sum == rev)
        printf("yes");
    else
        printf("no");
    
    return 0;
}
