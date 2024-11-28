#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,count=0;
    scanf("%lld",&n);
    int a[]= {100,20,10,5,1};
    for(int i=0; i<5; i++)
    {
        count+=n/a[i];
        n=n%a[i];
    }

    printf("%lld",count);
    return 0;

}
