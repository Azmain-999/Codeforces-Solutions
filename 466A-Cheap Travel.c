#include<stdio.h>
int main()
{
    int n,m,a,b,min_rubles;
    scanf("%d %d %d %d",&n,&m,&a,&b);
   
    if(m*a>b)
    {
       int x=(n%m)*a;
        if(x>b)
        {
           printf("%d",n/m*b+b);
        }
        else
        {
            min_rubles=n/m*b+n%m*a;
            printf("%d",min_rubles);
        }
    }
    else
    {

        printf("%d",n*a);
    }
    return 0;
}
