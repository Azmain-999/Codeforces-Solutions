#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        int sum=a+b;
        printf("%d\n",sum);
    }
    return 0;
}
