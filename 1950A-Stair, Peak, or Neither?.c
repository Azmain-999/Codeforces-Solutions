#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a<b && b<c)
        {
            printf("STAIR\n");
        }
       else if(a<b && b>c)
        {
            printf("PEAK\n");
        }
        else
        {
            printf("NONE\n");
        }
    }
    return 0;
}
