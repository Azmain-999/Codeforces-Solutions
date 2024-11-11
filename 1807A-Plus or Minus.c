#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b==c)
        {
            printf("+\n");
        }
        else if(a-b==c)
        {
            printf("-\n");
        }
    }
    return 0;
}
