#include<stdio.h>
int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    long long x=(n+1)/2;
    if(k<=x)
    {
        printf("%lld",2*k-1);
    }
    else
    {
        printf("%lld",(k-x)*2);
    }
    return 0;
}
