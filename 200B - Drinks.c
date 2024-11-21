#include<stdio.h>
int main()
{
    float n,p,x;
    scanf("%f",&n);
    float sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%f",&p);
        sum+=p;
    }
    x=sum/n;
    printf("%f\n",x);
    return 0;
}
