#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char a[11]="codeforces";
    for(int i=0;i<t;i++)
    {
        char c;
        scanf(" %c",&c);
        if(strchr(a,c)!= 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }
    return 0;

}
