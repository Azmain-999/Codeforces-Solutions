#include<stdio.h>
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if((n & (n-1))!=0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
