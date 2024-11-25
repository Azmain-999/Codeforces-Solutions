#include <stdio.h>

int main()
{
    long long int t,w,b,x,k;
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld %lld",&w,&b);
        x=w + b;
        k = 0;
        while (k*(k + 1)/2<=x)
        {
            k++;
        }
        printf("%d\n",(k-1));    
    }
    return 0;
}
