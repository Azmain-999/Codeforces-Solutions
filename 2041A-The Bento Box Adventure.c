#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a==1 || a==2 || a==3 || a==4) && (b==1 || b==2 || b==3 || b==4) && (c==1 || c==2 || c==3 || c==4) && (d==1 || d==2 || d==3 || d==4) )
    {
        printf("5");
    }
    else if((a==1 || a==2 || a==3 || a==5) && (b==1 || b==2 || b==3 || b==5) && (c==1 || c==2 || c==3 || c==5) && (d==1 || d==2 || d==3 || d==5))
    {
        printf("4");
    }
    else if((a==1 || a==2 || a==4 || a==5) && (b==1 || b==2 || b==4 || b==5) && (c==1 || c==2 || c==4 || c==5) && (d==1 || d==2 || d==4 || d==5))
    {
        printf("3");
    }
    else if((a==1 || a==3 || a==4 || a==5) && (b==1 || b==3 || b==4 || b==5) && (c==1 || c==3 || c==4 || c==5) && (d==1 || d==3 || d==4 || d==5))
    {
        printf("2");
    }
    else
    {
        printf("1");
    }
    return 0;
}
