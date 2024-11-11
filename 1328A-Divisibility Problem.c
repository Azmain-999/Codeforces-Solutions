#include<stdio.h>
int main()
{
    int t;
    int count=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a%b==0)
        {
            printf("0\n");
        }
        else
        {
            int ans=b-(a%b);
            printf("%d\n",ans);
        }

    }

    return 0;
}
