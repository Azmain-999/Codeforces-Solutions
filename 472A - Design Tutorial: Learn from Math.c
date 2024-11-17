#include<stdio.h>
int main()
{
    int n;
    int a,b;
    scanf("%d",&n);
    if(n%2==0)
    {
        a=n-4;
        printf("4 %d",a);
    }
    else
    {
        b=n-9;
        printf("9 %d",b);
    }
    return 0;
}
