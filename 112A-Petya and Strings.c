#include<stdio.h>
#include<string.h>
int main()
{
    char x[101];
    char y[101];
    scanf("%s",&x);
    scanf("%s",&y);

    if(stricmp(x,y)==0)
    {
        printf("0");
    }

    else if(stricmp(x,y)>0)
    {
        printf("1");
    }

    else if(stricmp(x,y)<0)
    {
        printf("-1");
    }
    return 0;

}
