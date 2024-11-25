#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,n,temp=0;
    scanf("%lld %lld",&a,&b);
    n = 3;
    long long int sum = a * n;
    long long int arr[n];
    arr[1] = b;
    arr[0] =sum-2*b;
    arr[2] = sum-arr[0]-arr[1];
    printf("%lld\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%lld ",arr[i]);
    }
    printf("\n");
    return 0;
}



