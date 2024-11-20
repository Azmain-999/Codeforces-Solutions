#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char a[4];
        char b[4];
        char temp;
        scanf("%s %s",a,b);
        temp=a[0];
        a[0]=b[0];
        b[0]=temp;

        printf("%s %s\n",a,b);
    }
    return 0;
}
