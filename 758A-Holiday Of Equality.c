#include<stdio.h>
int main()
{
    int n;
    int max_a=0;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);

        sum=sum+a;
        if(a>max_a)
        {
            max_a=a;
        }
    }
    long long spend=abs(sum-max_a*n);
    printf("%lld\n",spend);
    return 0;
}

