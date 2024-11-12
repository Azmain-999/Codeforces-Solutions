#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            printf("%d %d\n",y,x);
        }
        else if(y>x)
        {
            printf("%d %d\n",x,y);
        }
        else if(x==y)
        {
            printf("%d %d\n",x,y);
        }
    }
    return 0;
}
