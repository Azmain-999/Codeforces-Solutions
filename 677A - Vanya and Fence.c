#include<stdio.h>
int main()
{
    int n,h,a;
    int c,c1=0,c2=0;
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<=h)
        {
            c1+=1;
        }
        else
        {
            c2+=2;
        }
        c=c1+c2;
    }
    printf("%d",c);
    return 0;
}

